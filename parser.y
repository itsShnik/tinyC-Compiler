/*-----------------------------------------------
| Nikhil Shah (17CS10030)
| Apoorve Singhal (17CS30007)
| File: Bison Specifications for Compiler
| Written on: Sept. 28, '19
-----------------------------------------------*/

/*---------- Bison Specifications: C/C++ Declarations ------------*/

%{
#include <cstdlib>
#include <stdio.h>
#include <string>
#include <iostream>
#include <sstream>
#include "translator.h"
extern int yylex();
void yyerror(string s);
extern string Type;

using namespace std;

int htop = 1;
int debug_flag = 0;
%}


/*----------------- Union Declaration ---------------*/

%union {
  symtype* symtp;
  expr* E;
  int integer_val;
  char* character_val;
  char unOp;
  int instr;
  sym* symp;
  statement* S;
  array* A;
} 

/*----------------- Tokens: Terminals && Type: Non-Terminals -----------*/
%token<character_val> CHARACTER_CONSTANT ENUMERATION_CONSTANT
%token<character_val> FLOATING_CONSTANT
%token<integer_val> INTEGER_CONSTANT
%token<symp> IDENTIFIER
%token<character_val> STRING_LITERAL

%token SHREQ
%token ENUM
%token SQBRAOPEN
%token DEC

%token CONST
%token SHORT
%token ROBRACLOSE

%token AUTO

%token CONTINUE
%token IF
%token BINOREQ
%token COMMA
%token MINUSEQ
%token SHLEQ

%token BREAK
%token EXTERN
%token RETURN
%token GOTO
%token DOUBLE
%token LONG
%token TYPEDEF
%token ELSE
%token CURBRACLOSE
%token DOT
%token ACC
%token INC
%token AMP

%token MUL
%token ADD
%token SUB
%token NEG
%token EXCLAIM
%token BINANDEQ
%token BINXOREQ
%token CURBRAOPEN
%token SHL
%token SHR
%token DOTS

%token STAREQ
%token DIVEQ

%token DEFAULT
%token INLINE

%token REGISTER
%token WHILE
%token SQBRACLOSE
%token ROBRAOPEN
%token DIV
%token MODULO
%token STRUCT
%token VOLATILE
%token MODEQ
%token PLUSEQ
%token ASSIGN
%token CHAR
%token FOR
%token SIGNED
%token RESTRICT
%token UNSIGNED
%token EQ
%token UNION
%token COMPLEX
%token GTE
%token NEQ
%token HASH
%token BITSHL
%token BITSHR
%token LTE
%token BITXOR
%token BITOR
%token AND
%token VOID
%token OR
%token QUESTION
%token COLON
%token SEMICOLON

%token CASE
%token FLOAT
%token STATIC
%token SIZEOF
%token BOOL
%token IMAGINARY
%token DO
%token INT
%token SWITCH


%start translation_unit

/*----------remove dangling else problem ----------*/

%right THEN ELSE

/*-------------- Expressions ----------------*/
%type<E> logical_OR_expression
%type<E> exclusive_OR_expression
%type<E> relational_expression
%type<E> logical_AND_expression
%type<E> inclusive_OR_expression
%type<E> conditional_expression
%type<E> shift_expression
%type<E> AND_expression
%type<E> primary_expression 
%type<E> equality_expression
%type<E> expression_statement
%type<E> assignment_expression
%type<E> multiplicative_expression
%type<E> additive_expression
%type<E> expression

/*-------------- integer_val -------------*/

%type <integer_val> argument_expression_list

/*------------- Array Type ---------------*/
%type <A> cast_expression
%type <A> unary_expression
%type <A> postfix_expression

/*------------- some other types -----------*/
%type <symtp> pointer
%type <unOp> unary_operator
%type <symp> direct_declarator init_declarator declarator
%type <symp> constant initializer

/*------------- Auxillary non terminals M and N -------------*/
%type <S> N
%type <instr> M


/*---------------- Statements -------------*/
%type <S> compound_statement
%type <S> block_item
%type <S> jump_statement
%type <S> selection_statement
%type <S>  statement
%type <S> block_item_list
%type <S> labeled_statement 
%type <S> iteration_statement
/*------------------ Bison Specifications: Grammar Rules --------------*/

%%

primary_expression
	: constant {
	$$ = new expr();
  if (debug_flag == 1) {
    cout << "reached unary_operator" << endl;
  }
  $$->loc = $1;
	}
	| IDENTIFIER {
	$$ = new expr();
  if (debug_flag == 1) {
    cout << "reached unary_operator" << endl;
  }
	$$->loc = $1;
	$$->type = "NONBOOL";
	}
	| ROBRAOPEN expression ROBRACLOSE {
	$$ = $2;
  if (debug_flag == 1) {
    cout << "reached unary_operator" << endl;
  }
	}
  | STRING_LITERAL {
	$$ = new expr();
  if (debug_flag == 1) {
    cout << "reached unary_operator" << endl;
  }
	symtype* tmp = new symtype("PTR");
	$$->loc = gentemp(tmp, $1);
	$$->loc->type->ptr = new symtype("CHAR");
	}
	;

unary_expression
  :postfix_expression {
    $$ = $1;
    if (debug_flag == 1) {
      cout << "reached unary_operator" << endl;
    }
	}
	|SIZEOF ROBRAOPEN type_name ROBRACLOSE {
    if (debug_flag == 1) {
      cout << "reached unary_operator" << endl;
    }
	}
	|DEC unary_expression {
		emit ("SUB", $2->array->name, $2->array->name, "1");

    if (debug_flag == 1) {
      cout << "reached unary_operator" << endl;
    }
		$$ = $2;
	}
	|unary_operator cast_expression {
		$$ = new array();
		switch ($1) {
			case '!':
				$$->array = gentemp(new symtype($2->array->type->type));
        if (debug_flag == 1) {
          cout << "reached unary_operator" << endl;
        }
        htop = 1;
				emit ("LNOT", $$->array->name, $2->array->name);
				break;
			case '+':
        if (debug_flag == 1) {
          cout << "reached unary_operator" << endl;
        }
				$$ = $2;
				break;
     case '*':
				$$->loc = gentemp ($2->array->type->ptr);
				$$->cat = "PTR";
        if (debug_flag == 1) {
          cout << "reached unary_operator" << endl;
        }
				emit ("PTRR", $$->loc->name, $2->array->name);
				$$->array = $2->array;
				break;
			case '-':
				$$->array = gentemp(new symtype($2->array->type->type));
        if (debug_flag == 1) {
          cout << "reached unary_operator" << endl;
        }
				emit ("UMINUS", $$->array->name, $2->array->name);
				break;
			case '&':
				$$->array = gentemp((new symtype("PTR")));
        if (debug_flag == 1) {
          cout << "reached unary_operator" << endl;
        }
				$$->array->type->ptr = $2->array->type; 
				emit ("ADDRESS", $$->array->name, $2->array->name);
				break;
			case '~':
				$$->array = gentemp(new symtype($2->array->type->type));
        if (debug_flag == 1) {
          cout << "reached unary_operator" << endl;
        }
				emit ("BNOT", $$->array->name, $2->array->name);
				break;	
 			default:
				break;
		}
	}
	|INC unary_expression {
		emit ("ADD", $2->array->name, $2->array->name, "1");

		$$ = $2;
	}
	|SIZEOF unary_expression {
	
	}
	;


postfix_expression
	:postfix_expression SQBRAOPEN expression SQBRACLOSE {
		$$ = new array();
		
		$$->array = $1->loc;					
    if (debug_flag == 1) {
      cout << "reached postfix_expression" << endl;
    }
		$$->type = $1->type->ptr;				
		$$->loc = gentemp(new symtype("INTEGER"));		
		
		if ($1->cat=="ARR") {						
			sym* t = gentemp(new symtype("INTEGER"));
			stringstream strs;
        if (debug_flag == 1) {
          cout << "reached postfix_expression" << endl;
        }
		    strs <<size_type($$->type);
		    string temp_str = strs.str();
        htop = 1;
		    char* intStr = (char*) temp_str.c_str();
			string str = string(intStr);				
 			emit ("MULT", t->name, $3->loc->name, str);
			emit ("ADD", $$->loc->name, $1->loc->name, t->name);
		}
 		else {
 			stringstream strs;
		    strs <<size_type($$->type);
		    string temp_str = strs.str();
        if (debug_flag == 1) {
          cout << "reached postfix_expression" << endl;
        }
		    char* intStr1 = (char*) temp_str.c_str();
        htop = 1;
			string str1 = string(intStr1);		
	 		emit("MULT", $$->loc->name, $3->loc->name, str1);
 		}

		$$->cat = "ARR";
	}
  |primary_expression {
		$$ = new array ();
    htop = 1;
		$$->array = $1->loc;
    if (debug_flag == 1) {
      cout << "primary_expression" << endl;
    }
		$$->loc = $$->array;
    /*  setting type value here */
		$$->type = $1->loc->type;
	}	
  |postfix_expression ROBRAOPEN argument_expression_list ROBRACLOSE {
		$$ = new array();
		$$->array = gentemp($1->type);
		stringstream strs;
	    strs <<$3;
	    string temp_str = strs.str();
	    char* intStr = (char*) temp_str.c_str();
		string str = string(intStr);		
		emit("CALL", $$->array->name, $1->array->name, str);
	}
	|postfix_expression ROBRAOPEN ROBRACLOSE {
	
	}	
  |ROBRAOPEN type_name ROBRACLOSE CURBRAOPEN initializer_list COMMA CURBRACLOSE {
		$$ = new array();
		$$->array = gentemp(new symtype("INTEGER"));
		$$->loc = gentemp(new symtype("INTEGER"));
	}
	|postfix_expression DOT IDENTIFIER {
	}
	|postfix_expression INC {
		$$ = new array();

		$$->array = gentemp($1->array->type);
		emit ("EQUAL", $$->array->name, $1->array->name);

		emit ("ADD", $1->array->name, $1->array->name, "1");
	}
  |ROBRAOPEN type_name ROBRACLOSE CURBRAOPEN initializer_list CURBRACLOSE {
		$$ = new array();

    // debug_flag
		$$->array = gentemp(new symtype("INTEGER"));
    if (debug_flag == 1) {
      cout << "reached postfix_expression" << endl;
    }
		$$->loc = gentemp(new symtype("INTEGER"));
	}
  |postfix_expression ACC IDENTIFIER {
	}
	|postfix_expression DEC {
		$$ = new array();

		$$->array = gentemp($1->array->type);
		emit ("EQUAL", $$->array->name, $1->array->name);

		emit ("SUB", $1->array->name, $1->array->name, "1");
	}
	;

constant
	:CHARACTER_CONSTANT {
	$$ = gentemp(new symtype("CHAR"),$1);
	emit("EQUAL", $$->name, string($1));
	}
	|ENUMERATION_CONSTANT  {
	}
  |INTEGER_CONSTANT {
	stringstream strs;
    strs << $1;
    string temp_str = strs.str();
    char* intStr = (char*) temp_str.c_str();
	string str = string(intStr);
	$$ = gentemp(new symtype("INTEGER"), str);
	emit("EQUAL", $$->name, $1);
	}
  |FLOATING_CONSTANT {
	$$ = gentemp(new symtype("DOUBLE"), string($1));
	emit("EQUAL", $$->name, string($1));
	}
	;


argument_expression_list
	:argument_expression_list COMMA assignment_expression {
	emit ("PARAM", $3->loc->name);
	$$ = $1+1;
	}
  |assignment_expression {
	emit ("PARAM", $1->loc->name);
	$$ = 1;
	}
	;
cast_expression
	:ROBRAOPEN type_name ROBRACLOSE cast_expression {
		
		$$=$4;
	}
	|unary_expression {
		$$=$1;
	}
	;

multiplicative_expression
	:multiplicative_expression MUL cast_expression {
		if (typecheck ($1->loc, $3->array) ) {
			$$ = new expr();
      if (debug_flag == 1) {
        cout << "multiplicative_expression" << endl;
      }
			$$->loc = gentemp(new symtype($1->loc->type->type));
			emit ("MULT", $$->loc->name, $1->loc->name, $3->array->name);
		}
    else {
      if (debug_flag == 1) {
        cout << "multiplicative_expression" << endl;
      }
      cout << "Type Error"<< endl;
    } 
	}
	|cast_expression {
		$$ = new expr();
		if ($1->cat=="ARR") { 
			$$->loc = gentemp($1->loc->type);
      if (debug_flag == 1) {
        cout << "multiplicative_expression" << endl;
      }
			emit("ARRR", $$->loc->name, $1->array->name, $1->loc->name);
		}
		else if ($1->cat=="PTR") { 
      if (debug_flag == 1) {
        cout << "multiplicative_expression" << endl;
      }
			$$->loc = $1->loc;
		}
		else { 
			$$->loc = $1->array;
      if (debug_flag == 1) {
        cout << "multiplicative_expression" << endl;
      }
		}
	}
	|multiplicative_expression MODULO cast_expression {
		if (typecheck ($1->loc, $3->array) ) {
			$$ = new expr();
      if (debug_flag == 1) {
        cout << "multiplicative_expression" << endl;
      }
			$$->loc = gentemp(new symtype($1->loc->type->type));
			emit ("MODOP", $$->loc->name, $1->loc->name, $3->array->name);
		}
    else {
      if (debug_flag == 1) {
        cout << "multiplicative_expression" << endl;
      }
      cout << "Type Error"<< endl;
    } 
	}
	|multiplicative_expression DIV cast_expression {
		if (typecheck ($1->loc, $3->array) ) {
			$$ = new expr();
      if (debug_flag == 1) {
        cout << "multiplicative_expression" << endl;
      }
			$$->loc = gentemp(new symtype($1->loc->type->type));
			emit ("DIVIDE", $$->loc->name, $1->loc->name, $3->array->name);
		}
    else {
      if (debug_flag == 1) {
        cout << "multiplicative_expression" << endl;
      }
      cout << "Type Error"<< endl;
    } 
	}
	;

additive_expression
	:additive_expression SUB multiplicative_expression {
			if (typecheck ($1->loc, $3->loc) ) {
			$$ = new expr();
			$$->loc = gentemp(new symtype($1->loc->type->type));
			emit ("SUB", $$->loc->name, $1->loc->name, $3->loc->name);
		}
		else cout << "Type Error"<< endl;

	}
  |additive_expression ADD multiplicative_expression {
		if (typecheck ($1->loc, $3->loc) ) {
			$$ = new expr();
			$$->loc = gentemp(new symtype($1->loc->type->type));
			emit ("ADD", $$->loc->name, $1->loc->name, $3->loc->name);
		}
		else cout << "Type Error"<< endl;
	}
	|multiplicative_expression {
		$$=$1;
	}
	;
unary_operator
	:EXCLAIM {
		$$ = '!';
    htop = 1;
    if (debug_flag == 1) {
      cout << "reached unary_operator" << endl;
    }
	}
	|AMP {
    htop = 1;
		$$ = '&';
    if (debug_flag == 1) {
      cout << "reached unary_operator" << endl;
    }
	}
	|SUB {
    htop = 1;
		$$ = '-';

    if (debug_flag == 1) {
      cout << "reached unary_operator" << endl;
    }
	}
	|ADD {
    htop = 1;
		$$ = '+';
    if (debug_flag == 1) {
      cout << "reached unary_operator" << endl;
    }
	}
	|NEG {
    htop = 1;
		$$ = '~';
    if (debug_flag == 1) {
      cout << "reached unary_operator" << endl;
    }
	}
	|MUL {
    htop = 1;
		$$ = '*';
    if (debug_flag == 1) {
      cout << "reached unary_operator" << endl;
    }
	}
	;


relational_expression
	:relational_expression BITSHL shift_expression {
		if (typecheck ($1->loc, $3->loc) ) {
			$$ = new expr();
			$$->type = "BOOL";

      if (debug_flag == 1) {
        cout << "reached relational_expression" << endl;
      }
			$$->falselist = makelist (nextinstr()+1);
			$$->truelist = makelist (nextinstr());
			emit("LT", "", $1->loc->name, $3->loc->name);
			emit ("GOTOOP", "");
		}
		else cout << "Type Error"<< endl;
	}
	|shift_expression {$$=$1;}
	|relational_expression LTE shift_expression {
		if (typecheck ($1->loc, $3->loc) ) {
			$$ = new expr();
			$$->type = "BOOL";

      if (debug_flag == 1) {
        cout << "reached relational_expression" << endl;
      }
			$$->falselist = makelist (nextinstr()+1);
			$$->truelist = makelist (nextinstr());
			emit("LE", "", $1->loc->name, $3->loc->name);
			emit ("GOTOOP", "");
		}
		else cout << "Type Error"<< endl;
	}
	|relational_expression GTE shift_expression {
		if (typecheck ($1->loc, $3->loc) ) {
			$$ = new expr();
			$$->type = "BOOL";

      if (debug_flag == 1) {
        cout << "reached relational_expression" << endl;
      }
			$$->falselist = makelist (nextinstr()+1);
			$$->truelist = makelist (nextinstr());
			emit("GE", "", $1->loc->name, $3->loc->name);
      htop = 1;
			emit ("GOTOOP", "");
		}
		else cout << "Type Error"<< endl;
	}
	|relational_expression BITSHR shift_expression {
		if (typecheck ($1->loc, $3->loc) ) {
			$$ = new expr();
			$$->type = "BOOL";

			$$->falselist = makelist (nextinstr()+1);
      if (debug_flag == 1) {
        cout << "reached relational_expression" << endl;
      }
			$$->truelist = makelist (nextinstr());
			emit ("GOTOOP", "");
			emit("GT", "", $1->loc->name, $3->loc->name);
		}
		else {
        cout << "Type Error"<< endl;
        if (debug_flag == 1) {
            cout << "reached here" << endl;
        }
    }
	}
	;


exclusive_OR_expression
	:exclusive_OR_expression BITXOR AND_expression {
		if (typecheck ($1->loc, $3->loc) ) {
			
			convertBool2Int ($3);
			convertBool2Int ($1);
			
      if (debug_flag == 1) {
        cout << "reached exclusive_OR_expression" << endl;
      }
			$$ = new expr();
			$$->type = "NONBOOL";

			$$->loc = gentemp (new symtype("INTEGER"));
			emit ("XOR", $$->loc->name, $1->loc->name, $3->loc->name);
		}
    else {
      if (debug_flag == 1) {
        cout << "reached exclusive_OR_expression" << endl;
      }
      cout << "Type Error"<< endl;
    } 
	}
	|AND_expression {$$=$1;}
	;

equality_expression
	:equality_expression EQ relational_expression {
		if (typecheck ($1->loc, $3->loc)) {
			convertBool2Int ($3);
			convertBool2Int ($1);

      if (debug_flag == 1) {
        cout << "equality_expression" << endl;
      }
			$$ = new expr();
			$$->type = "BOOL";

      htop = 1;

			$$->falselist = makelist (nextinstr()+1);
			$$->truelist = makelist (nextinstr());
			emit("EQOP", "", $1->loc->name, $3->loc->name);
			emit ("GOTOOP", "");
		}
    else {
      if (debug_flag == 1) {
        cout << "equality_expression" << endl;
      }
      cout << "Type Error"<< endl;
    } 
	}
	|equality_expression NEQ relational_expression {
		if (typecheck ($1->loc, $3->loc) ) {
			
			convertBool2Int ($3);
			convertBool2Int ($1);

			$$ = new expr();
			$$->type = "BOOL";

      if (debug_flag == 1) {
        cout << "reached equality_expression" << endl;
      }
			$$->falselist = makelist (nextinstr()+1);
			$$->truelist = makelist (nextinstr());
			emit("NEOP", "", $1->loc->name, $3->loc->name);
			emit ("GOTOOP", "");
		}
		else cout << "Type Error"<< endl;
	}
	|relational_expression {$$=$1;}
	;

shift_expression
	:shift_expression SHR additive_expression{
		if ($3->loc->type->type == "INTEGER") {
			$$ = new expr();

      if (debug_flag == 1) {
        cout << "reached shift_expression" << endl;
      }
			$$->loc = gentemp (new symtype("INTEGER"));
			emit ("RIGHTOP", $$->loc->name, $1->loc->name, $3->loc->name);
		}
		else cout << "Type Error"<< endl;
	}
	|additive_expression {
		$$=$1;
	}
	|shift_expression SHL additive_expression {
		if ($3->loc->type->type == "INTEGER") {
			$$ = new expr();

      if (debug_flag == 1) {
        cout << "reached shift_expression" << endl;
      }
			$$->loc = gentemp (new symtype("INTEGER"));
			emit ("LEFTOP", $$->loc->name, $1->loc->name, $3->loc->name);
		}
		else cout << "Type Error"<< endl;
	}
	;


inclusive_OR_expression
	:inclusive_OR_expression BITOR exclusive_OR_expression {
		if (typecheck ($1->loc, $3->loc) ) {
			
			convertBool2Int ($3);
			convertBool2Int ($1);
			
			$$ = new expr();
			$$->type = "NONBOOL";

			$$->loc = gentemp (new symtype("INTEGER"));
			emit ("INOR", $$->loc->name, $1->loc->name, $3->loc->name);
		}
		else cout << "Type Error"<< endl;
	}
	|exclusive_OR_expression {$$=$1;}
	;

logical_AND_expression
	:logical_AND_expression N AND M inclusive_OR_expression {
		convertInt2Bool($5);

    if (debug_flag == 1) {
      cout << "logical_and_expression" << endl;
    }
		
		backpatch($2->nextlist, nextinstr());
		convertInt2Bool($1);

    // giving an implicit type of BOOL
		$$ = new expr();
		$$->type = "BOOL";

    // backpatching the required statements
		backpatch($1->truelist, $4);
		$$->falselist = merge ($1->falselist, $5->falselist);
		$$->truelist = $5->truelist;
	}
	|inclusive_OR_expression {$$=$1;}
	;

logical_OR_expression
	:logical_OR_expression N OR M logical_AND_expression {
		convertInt2Bool($5);

    htop = 1;
		
		convertInt2Bool($1);
		backpatch($2->nextlist, nextinstr());

		$$ = new expr();
		$$->type = "BOOL";
    if (debug_flag == 1) {
      cout << "logical_and_expression" << endl;
    }
	
		backpatch ($$->falselist, $4);
		$$->falselist = $5->falselist;
		$$->truelist = merge ($1->truelist, $5->truelist);
	}
	|logical_AND_expression {$$=$1;}
	;

M 	: %empty{	$$ = nextinstr(); }
     ;

AND_expression
	:AND_expression AMP equality_expression {
		if (typecheck ($1->loc, $3->loc) ) {
			
			convertBool2Int ($3);
			convertBool2Int ($1);
			
			$$ = new expr();
			$$->type = "NONBOOL";

			$$->loc = gentemp (new symtype("INTEGER"));
			emit ("BAND", $$->loc->name, $1->loc->name, $3->loc->name);
		}
		else cout << "Type Error"<< endl;
	}
	|equality_expression {$$=$1;}
	;


assignment_expression
	:unary_expression assignment_operator assignment_expression {
		if($1->cat=="ARR") {
			$3->loc = conv($3->loc, $1->type->type);
			emit("ARRL", $1->array->name, $1->array->name, $3->loc->name);	
			}
		else if($1->cat=="PTR") {
			emit("PTRL", $1->array->name, $3->loc->name);	
			}
		else{
			$3->loc = conv($3->loc, $1->array->type->type);
			emit("EQUAL", $1->array->name, $3->loc->name);
			}
		$$ = $3;
	}
	|conditional_expression {$$=$1;}
	;

expression
	:expression COMMA assignment_expression {
	
	}
	|assignment_expression {$$=$1;}
	;

N 	: %empty { 	
		$$  = new statement();
    if (debug_flag == 1) {
      cout << "reached N" << endl;
    }
		$$->nextlist = makelist(nextinstr());
    htop = 1;
		emit ("GOTOOP","");
	}
  ;

constant_expression
	:conditional_expression {
	
	}
	;

declaration
	:declaration_specifiers SEMICOLON {
	}
	|declaration_specifiers init_declarator_list SEMICOLON {
	}
	;


declaration_specifiers
	:type_specifier {
	}
	|type_qualifier declaration_specifiers {
	}
	|type_specifier declaration_specifiers {
	}
	|storage_class_specifier declaration_specifiers {
	}
	|type_qualifier {
	}
	|storage_class_specifier {
	}
	|function_specifier {
	}
	|function_specifier declaration_specifiers {
	}
	;
conditional_expression
	:logical_OR_expression N QUESTION M expression N COLON M conditional_expression {
		$$->loc = gentemp($5->loc->type);
		$$->loc->update($5->loc->type);
		emit("EQUAL", $$->loc->name, $9->loc->name);
		list<int> l = makelist(nextinstr());
		emit ("GOTOOP", "");

		backpatch($6->nextlist, nextinstr());
		emit("EQUAL", $$->loc->name, $5->loc->name);
		list<int> m = makelist(nextinstr());
		l = merge (l, m);
		emit ("GOTOOP", "");

		backpatch($2->nextlist, nextinstr());
		convertInt2Bool($1);
		backpatch ($1->falselist, $8);
		backpatch (l, nextinstr());
		backpatch ($1->truelist, $4);
	}
	|logical_OR_expression {$$=$1;}
	;


init_declarator
	:declarator ASSIGN initializer {
		if ($3->initial_value!="") {
      htop = 1;
      $1->initial_value=$3->initial_value;
    }
		emit ("EQUAL", $1->name, $3->name);
	}
	|declarator {$$=$1;}
	;

storage_class_specifier
	: AUTO {
	}
	| REGISTER {
	}
	| STATIC {
	}
	| EXTERN {
	}
	;
init_declarator_list
	:init_declarator_list COMMA init_declarator {
	}
	|init_declarator {
	}
	;

assignment_operator 
	:ASSIGN {
    if (debug_flag == 1) {
      cout << "reached assignment_operator" << endl;
    }
	}
	|BINANDEQ {
    if (debug_flag == 1) {
      cout << "reached assignment_operator" << endl;
    }
	}
	|BINXOREQ {
    if (debug_flag == 1) {
      cout << "reached assignment_operator" << endl;
    }
	}
	|SHLEQ {
    if (debug_flag == 1) {
      cout << "reached assignment_operator" << endl;
    }
	}
	|SHREQ {
    if (debug_flag == 1) {
      cout << "reached assignment_operator" << endl;
    }
	}
	|BINOREQ {
    if (debug_flag == 1) {
      cout << "reached assignment_operator" << endl;
    }
	}
	|DIVEQ {
    if (debug_flag == 1) {
      cout << "reached assignment_operator" << endl;
    }
	}
	|PLUSEQ {
    if (debug_flag == 1) {
      cout << "reached assignment_operator" << endl;
    }
	}
	|MINUSEQ {
    if (debug_flag == 1) {
      cout << "reached assignment_operator" << endl;
    }
	}
	|MODEQ {
    if (debug_flag == 1) {
      cout << "reached assignment_operator" << endl;
    }
	}
	|STAREQ {
    if (debug_flag == 1) {
      cout << "reached assignment_operator" << endl;
    }

	}
	;


specifier_qualifier_list
	: type_qualifier specifier_qualifier_list {
	}
	| type_qualifier {
	}
	| type_specifier specifier_qualifier_list {
	}
	| type_specifier {
	}
	;

enumerator
	:IDENTIFIER ASSIGN constant_expression {
	}
	|IDENTIFIER {
	}
	;
enumerator_list
	:enumerator_list COMMA enumerator {
	}
	|enumerator {
	}
	;
function_specifier
	:INLINE {
	}
	;


type_qualifier
	:RESTRICT {
	}
	|VOLATILE {
	}
	|CONST {
	}
	;

pointer
	:MUL pointer {
		$$ = new symtype("PTR", $2);
	}
	|MUL type_qualifier_list pointer {
	}
	|MUL type_qualifier_list {
	}
	|MUL {
		$$ = new symtype("PTR");
	}
	;
parameter_list
	:parameter_list COMMA parameter_declaration {
	}
	|parameter_declaration {
	}
	;



enum_specifier
	:ENUM IDENTIFIER {
	}
	|ENUM IDENTIFIER CURBRAOPEN enumerator_list COMMA CURBRACLOSE {
	}
	|ENUM CURBRAOPEN enumerator_list CURBRACLOSE {
	}
	|ENUM IDENTIFIER CURBRAOPEN enumerator_list CURBRACLOSE {
	}
	|ENUM CURBRAOPEN enumerator_list COMMA CURBRACLOSE {
	}
	;


declarator
	:pointer direct_declarator {
		symtype * t = $1;
    if (debug_flag == 1) {
      cout << "declarator" << endl;
    }
		while (t->ptr !=NULL) t = t->ptr;
		t->ptr = $2->type;
    htop = 1;
		$$ = $2->update($1);
	}
	|direct_declarator {
	}
	;



initializer_list
	:initializer_list COMMA designation initializer {
	}
	|designation initializer {
	}
	|initializer_list COMMA initializer {
	}
	|initializer {
	}
	;


direct_declarator
	: direct_declarator SQBRAOPEN assignment_expression SQBRACLOSE {
  /*
    rules for arrays
  */
		symtype * t = $1 -> type;
		symtype * prev = NULL;
  // setting type of array
		while (htop && (t->type == "ARR")) {
			prev = t;
			t = t->ptr;
		}
  /* setting type of array */
		if (prev==NULL) {
			int temp = atoi($3->loc->initial_value.c_str());
			symtype* s = new symtype("ARR", $1->type, temp);
			$$ = $1->update(s);
		}
  /* setting type of array*/
		else {
			prev->ptr =  new symtype("ARR", t, atoi($3->loc->initial_value.c_str()));
			$$ = $1->update ($1->type);
		}
	}
	| direct_declarator SQBRAOPEN type_qualifier_list SQBRACLOSE {
	}
	| direct_declarator ROBRAOPEN CT parameter_type_list ROBRACLOSE {
		table->name = $1->name;

		if ($1->type->type !="VOID") {
			sym *s = table->lookup("return");
			s->update($1->type);		
		}
		$1->nested=table;

		table->parent = globalTable;
		changeTable (globalTable);				
		currentSymbol = $$;
	}
	| direct_declarator SQBRAOPEN type_qualifier_list assignment_expression SQBRACLOSE {
	}
	| ROBRAOPEN declarator ROBRACLOSE {$$=$2;}
	|IDENTIFIER {
		$$ = $1->update(new symtype(Type));
		currentSymbol = $$;
	}
	| direct_declarator SQBRAOPEN type_qualifier_list MUL SQBRACLOSE {
	}
	| direct_declarator SQBRAOPEN MUL SQBRACLOSE {
  }
	| direct_declarator SQBRAOPEN SQBRACLOSE {
		symtype * t = $1 -> type;
		symtype * prev = NULL;
		while (t->type == "ARR") {
			prev = t;
			t = t->ptr;
		}
		if (prev==NULL) {
			symtype* s = new symtype("ARR", $1->type, 0);
			$$ = $1->update(s);
		}
		else {
			prev->ptr =  new symtype("ARR", t, 0);
			$$ = $1->update ($1->type);
		}
	}
	| direct_declarator SQBRAOPEN STATIC type_qualifier_list assignment_expression SQBRACLOSE {
	}
	| direct_declarator SQBRAOPEN STATIC assignment_expression SQBRACLOSE {
	}
	| direct_declarator ROBRAOPEN identifier_list ROBRACLOSE {
	}
	| direct_declarator ROBRAOPEN CT ROBRACLOSE {
		table->name = $1->name;

		if ($1->type->type !="VOID") {
			sym *s = table->lookup("return");
			s->update($1->type);		
		}
		$1->nested=table;

		table->parent = globalTable;
		changeTable (globalTable);				
		currentSymbol = $$;
	}
	;
type_specifier
	: COMPLEX
	| IMAGINARY
	| VOID {Type="VOID";}
	| FLOAT
	| SIGNED
	| UNSIGNED
	| CHAR {Type="CHAR";}
	| INT {Type="INTEGER";}
	| LONG
	| BOOL
	| DOUBLE {Type="DOUBLE";}
	| SHORT 
	| enum_specifier
	;



CT
	: %empty { 															
		if (currentSymbol->nested==NULL) changeTable(new symboltable(""));	
		else {
			changeTable (currentSymbol ->nested);						
			emit ("LABEL", table->name);
		}
	}
	;

type_qualifier_list
	:type_qualifier_list type_qualifier {
	}
	|type_qualifier {
	}
	;
identifier_list
	:identifier_list COMMA IDENTIFIER {
	}
	|IDENTIFIER {
	}
	;

type_name
	:specifier_qualifier_list {
	}
	;

initializer
	:CURBRAOPEN initializer_list COMMA CURBRACLOSE {
	}
	|CURBRAOPEN initializer_list CURBRACLOSE {
	}
	|assignment_expression {
		$$ = $1->loc;
	}
	;
designation
	:designator_list ASSIGN {
	}
	;

designator_list
	:designator_list designator {
	}
	|designator {
	}

	;

designator
	:DOT IDENTIFIER {
	}
	|SQBRAOPEN constant_expression SQBRACLOSE {
	}
	;
labeled_statement
	:DEFAULT COLON statement {$$ = new statement();}
	|CASE constant_expression COLON statement {$$ = new statement();}
	|IDENTIFIER COLON statement {$$ = new statement();}
	;

compound_statement
	:CURBRAOPEN block_item_list CURBRACLOSE {$$=$2;}
	|CURBRAOPEN CURBRACLOSE {$$ = new statement();}
	;


declaration_list
	:declaration_list declaration {
	}
	|declaration {
	}
	;


block_item_list
	:block_item_list M block_item {
		$$=$3;
		backpatch ($1->nextlist, $2);
	}
	|block_item {$$=$1;}
	;

function_definition
	:declaration_specifiers declarator CT compound_statement {
		table->parent = globalTable;
		changeTable (globalTable);
	}
	|declaration_specifiers declarator declaration_list CT compound_statement {}
	;
expression_statement
	:SEMICOLON {$$ = new expr();}
	|expression SEMICOLON {$$=$1;}
	;

parameter_type_list
	:parameter_list COMMA DOTS {
	}
	|parameter_list {
	}
	;

parameter_declaration
	:declaration_specifiers {
	}
	|declaration_specifiers declarator {
	}
	;


selection_statement
	:IF ROBRAOPEN expression N ROBRACLOSE M statement N ELSE M statement {
		backpatch ($4->nextlist, nextinstr());
		convertInt2Bool($3);
		$$ = new statement();
		backpatch ($3->truelist, $6);
		backpatch ($3->falselist, $10);
		list<int> temp = merge ($7->nextlist, $8->nextlist);
		$$->nextlist = merge ($11->nextlist,temp);
	}
	|SWITCH ROBRAOPEN expression ROBRACLOSE statement {
	}
	|IF ROBRAOPEN expression N ROBRACLOSE M statement N %prec THEN{
		backpatch ($4->nextlist, nextinstr());
		convertInt2Bool($3);
		$$ = new statement();
		backpatch ($3->truelist, $6);
		list<int> temp = merge ($3->falselist, $7->nextlist);
		$$->nextlist = merge ($8->nextlist, temp);
	}
	;

statement
	:iteration_statement {$$=$1;}
	|jump_statement {$$=$1;}
	|compound_statement {$$=$1;}
	|expression_statement {
		$$ = new statement();
		$$->nextlist = $1->nextlist;
	}
	|selection_statement {$$=$1;}
	|labeled_statement {
	}
	;
jump_statement
	:CONTINUE SEMICOLON {
    $$ = new statement();     
    if (debug_flag == 1) {
      cout << "jump_statement" << endl;
    }
  }
	|RETURN SEMICOLON {
    if (debug_flag == 1) {
      cout << "jump_statement" << endl;
    }
		$$ = new statement();
    htop = 1;
		emit("RETURN","");
	}
	|GOTO IDENTIFIER SEMICOLON {$$ = new statement();}
	|RETURN expression SEMICOLON {
		$$ = new statement();
    if (debug_flag == 1) {
      cout << "jump_statement" << endl;
    }
		emit("RETURN",$2->loc->name);
	}
	|BREAK SEMICOLON {
    if (debug_flag == 1) {
      cout << "jump_statement" << endl;
    }
    $$ = new statement();
  }
	;

translation_unit
	:translation_unit external_declaration {}
	|external_declaration {}
	;

external_declaration
	:declaration {}
	|function_definition {}
	;

iteration_statement
	:DO M statement M WHILE ROBRAOPEN expression ROBRACLOSE SEMICOLON {
		convertInt2Bool($7);
		$$ = new statement();
		
		backpatch ($3->nextlist, $4);
		backpatch ($7->truelist, $2);

		
		$$->nextlist = $7->falselist;
	}
	|WHILE M ROBRAOPEN expression ROBRACLOSE M statement {
		convertInt2Bool($4);
		$$ = new statement();
		
		
		backpatch($4->truelist, $6);
		backpatch($7->nextlist, $2);
		$$->nextlist = $4->falselist;
		
		stringstream strs;
	    strs << $2;
	    string temp_str = strs.str();
	    char* intStr = (char*) temp_str.c_str();
		string str = string(intStr);

		emit ("GOTOOP", str);
	}
	|FOR ROBRAOPEN expression_statement M expression_statement M expression N ROBRACLOSE M statement{
		$$ = new statement();
		convertInt2Bool($5);
		backpatch ($11->nextlist, $6);
		backpatch ($5->truelist, $10);
		backpatch ($8->nextlist, $4);
		stringstream strs;
	    strs << $6;
	    string temp_str = strs.str();
	    char* intStr = (char*) temp_str.c_str();
		string str = string(intStr);
		emit ("GOTOOP", str);
		$$->nextlist = $5->falselist;
	}
	|FOR ROBRAOPEN expression_statement M expression_statement ROBRACLOSE M statement{
		$$ = new statement();
		convertInt2Bool($5);
		backpatch ($8->nextlist, $4);
		backpatch ($5->truelist, $7);
		stringstream strs;
	    strs << $4;
	    string temp_str = strs.str();
	    char* intStr = (char*) temp_str.c_str();
		string str = string(intStr);

		emit ("GOTOOP", str);
		$$->nextlist = $5->falselist;
	}
	;



block_item
	:statement {$$ = $1;}
	|declaration {
		$$ = new statement();
	}
	;


%%

void yyerror(string s) {
    cout<<s<<endl;
}
