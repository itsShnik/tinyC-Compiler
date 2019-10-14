/*---------------------------------------------------
| Nikhil Shah (17CS10030)
| Apoorve Singhal (17CS30007)
| File: Bison specifications for compiler
| Written on: Sep. 28, 2019
---------------------------------------------------*/


/*--------- Bison Specifications: C Declarations -------*/

%{ 
	#include <iostream>
	#include <string>
	#include <vector>
	#include "translator.h"

	extern int yylex();
	void yyerror(char *s);
	
	/*--- declaration of symbol table ---*/
	#define MAX_SYMBOLS 100
	symboltable symtab[MAX_SYMBOLS];
	
	/*--- declaration of labeltable ---*/
	vector<label> labeltable;

	/*--- declaration of quadarray ---*/
	quad *qArray[MAX_SYMBOLS];
	int quadPtr = 0;

%}

/*--------------- Declaration of Union -------------*/
%union {
	expression_class &E;
	boolean_expression_class &BE;
	statement_class &S;
	int intval;
	float floatval;
	char *charval;
	char *stringval;
	symboltable *symp;
  identifier_class &ID;
}


// Keywords
%token AUTO ENUM RESTRICT UNSIGNED BREAK EXTERN RETURN VOID CASE FLOAT SHORT 
%token VOLATILE CHAR FOR SIGNED WHILE CONST GOTO SIZEOF BOOL CONTINUE IF STATIC COMPLEX 
%token DEFAULT INLINE STRUCT IMAGINARY DO INT SWITCH DOUBLE LONG TYPEDEF ELSE 
%token REGISTER UNION

// Punctuators and operators
%token MODASSIGN RIGHTSHIFTASSIGN SUBASSIGN MULTIPLYASSIGN INCREMENT
%token DIVIDEASSIGN ADDASSIGN ANDASSIGN XORASSIGN  RIGHTSHIFT LEFTSHIFT NOTEQUAL EQUALEQUAL 
%token DECREMENT POINTER ORASSIGN LESSTHANEQUAL GREATERTHANEQUAL OR LEFTSHIFTASSIGN ELLIPSIS 
%token PLUS AND MULTIPLY MINUS NOT DIVIDE PERCENTAGE GREATERTHAN LESSTHAN EQUAL OPENSQUARE CLOSESQUARE
%token OPENROUND CLOSEROUND OPENCURLY CLOSECURLY DOT EXCLAMATION COMMA HASH XOR QUESTIONMARK COLON SEMICOLON

// Others 
%token <intval> INT_CONSTANT 
%token <floatval> FLOAT_CONSTANT 
%token <symp> ENU_CONSTANT 
%token <charval> CHAR_CONSTANT 
%token <ID> IDENTIFIER 
%token <stringval> STRING_LITERAL

%type <E> constant;
%type <E> primary_expression 
%type <E> expression 

/*------------------------ Bison Specifications: Grammar Rules ---------------------------*/

%%

constant : INT_CONSTANT 
            {$$->loc = gentemp(); qArray[quadPtr++] = new quad(copy_ins, $$->loc->name, $1);}
          | FLOAT_CONSTANT 
            {$$->loc = gentemp(); qArray[quadPtr++] = new quad(copy_ins, $$->loc->name, $1);}
          | ENU_CONSTANT 
            {$$->loc = gentemp(); qArray[quadPtr++] = new quad(copy_ins, $$->loc->name, $1->name);}
          | CHAR_CONSTANT 
            {$$->loc = gentemp(); qArray[quadPtr++] = new quad(copy_ins, $$->loc->name, $1);}
          ;

primary_expression : IDENTIFIER 
                      {$$->loc = $1->loc; qArray[quadPtr++] = new quad($$->loc->name, $1->loc->name);}
                    | constant 
                      {$$->loc = gentemp(); qArray[quadPtr++] = new quad($$->loc->name, $1->loc->name);}
                    | STRING_LITERAL 
                      {$$->loc = gentemp(); qArray[quadPtr++] = new quad($$->loc->name, $1);}
                    | OPENROUND expression CLOSEROUND
                      {$$->loc = $2->loc; qArray[quadPtr++] = new quad($$->loc->name, $2->loc->name);}
                    ;

expression : COMMA
            {$$->loc = NULL;}
           ;  
%%

/*--------------- Additional C code ----------------*/

/*--------------- Func for error ------------------*/
void yyerror(char *s) {
  cout << "Error is: " << s << endl;
}

/*------------ Functions related to symbol table ---------*/
symboltable *symlook(string s) {
  symboltable *it;

  for (it = symtab; it < &symtab[MAX_SYMBOLS]; it++) {
    // is symbol s already here
    if (!((it->name).empty())&& it->name != s) {
      return it;
    }
    // if iterator has reached an empty slot in the symboltable, use that slot
    if (!((it->name).empty())) {
      it->name = s;
      return it;
    }
  }
  yyerror("Too many symbols!\n");
  exit(1);
}

// gentemp with no argument
symboltable *gentemp() {
  static int c = 0; //temp counter for variables
  char str[10]; //temp name
  sprintf(str, "t%02d", c++);
  return symlook(str);
}

void update(symboltable *st, string type, int size, int offset) {
  symboltable *item = symlook(st->name);
  item->type = type;
  item->size = size;
  item->offset = offset;
}

void print() {
  symboltable *it;
  for (it = symtab; it < &symtab[MAX_SYMBOLS]; it++) {
    cout << it->name << " " << it->type << " " << it->size << " " << it->offset << " " << it->nested_table << endl;
  }
}

/*--------------- Functions related to handling unconditional jump ----------------*/
void handle_label(string label_id) {

  vector<label>::iterator it;

  for (it = labeltable.begin(); it != labeltable.end(); it++) {

    //if it exists in the labeltable
    if (it->name == label_id) {
      if (it->addr == 0) {
        it->addr = quadPtr;
        backpatch(it->list , it->addr);
        (it->list).clear();
        return;
      }

      else{
        yyerror("Duplicate definition of label\n");
        return;
      }
    }

  }
  //if it does not exist in the table
  it->addr = quadPtr;
  (it->list).clear();

}

void handle_goto(string label_id){
  vector<label>::iterator it;

  for (it = labeltable.begin(); it != labeltable.end(); it++) {

      // if the label has been used
      if (label_id == it->name) {

      // label has been used before but not declared
      // add this line to the list of usages
        if (it->addr) {
          it->list = merge(it->list, makelist(quadPtr));
          return;
        }

        // if the label has been declared before
        else {
          //#TODO 
          //emit a goto with it->addr
          return;
        }
    }

   }

  //if goto label does not exist in the table, add it
  it->addr = 0;
  it->list = makelist(quadPtr);

}

vector<int> makelist(int i) {
  vector<int> list;  
  list.push_back(i);
  return list;
}

vector<int> merge(vector<int> l1, vector<int> l2) {
  vector<int> l3 = l1;
  l3.insert(l3.end(), l2.begin(), l2.end());
  return l3;
}

void backpatch(vector<int> p, int i) {
  // for each quad in p, the goto address should be i
  vector<int>::iterator it;

  for (it = p.begin(); it != p.end(); it++) {
    (*qArray[*it]).result = to_string(i);
  }
}

// for binary and unary operators
quad::quad(opcodeType op1, string s1, string s2, string s3):
  op(op1), result(s1), arg1(s2), arg2(s3) {}

quad::quad(opcodeType op1, string s1, string s2):
  op(op1), result(s1), arg1(s2), arg2(0) {}

// for instructions with int constants
quad::quad(opcodeType op1, string s1, int num):
  op(op1), result(s1), arg1(0), arg2(0) {
	arg1 = to_string(num);
  }

// for instructions with float constants
quad::quad(opcodeType op1, string s1, float num):
  op(op1), result(s1), arg1(0), arg2(0) {
	arg1 = to_string(num);
  }

// for copy statement
quad::quad(string s1, string s2):
  op(copy_ins), result(s1), arg1(s2), arg2(0) {}

// for goto statement
quad::quad(opcodeType op1, string s1):
  op(op1), result(s1) {}

void quad::print() {
  if ((this->op <= div_ins) && (this->op >= plus_ins)) {
    cout << this->result << " = " << this->arg1 << endl;
    switch(this->op) {
      case plus_ins: printf("+"); break;
      case minus_ins: printf("-"); break;
      case mult_ins: printf("*"); break;
      case div_ins: printf("/"); break;
      default: break;
    }
    cout << " " << this->arg2 << endl;
  }
  else if (this->op == unaryminus_ins) {
    cout << this->result << " = - " << this->arg1 << endl;
  }
  else if (this->op == copy_ins) {
    cout << this->result << " = " << this->arg1 << endl;
  }
  else if (this->op == unconditional_jump_ins) {
    cout << "goto " << this->result << endl;
  }
  else if (this->op == return_ins) {
    cout << "return" << endl;
  }

}


