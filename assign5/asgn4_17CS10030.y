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
	
	extern int yylex();
	void yyerror(char *s);
	
	/*--- declaration of symbol table ---*/
	#define MAX_SYMBOLS 100
	struct symboltable symtab[MAX_SYMBOLS];
	
	/*--- declaration of labeltable ---*/
	vector<label> labeltabel;
%}

/*--------------- Declaration of Union -------------*/
%union {
	expression E;
	boolean_expression BE;
	statement S;
	int intval;
	float floatval;
	char charval;
	struct symboltable *symp;
}

// Keywords
%token AUTO ENUM RESTRICT UNSIGNED BREAK EXTERN RETURN VOID CASE FLOAT SHORT 
%token VOLATILE CHAR FOR SIGNED WHILE CONST GOTO SIZEOF BOOL CONTINUE IF STATIC COMPLEX 
%token DEFAULT INLINE STRUCT IMAGINARY DO INT SWITCH DOUBLE LONG TYPEDEF ELSE 
%token REGISTER UNION

// Punctuators and operators
%token MODASSIGN RIGHTSHIFTASSIGN SUBASSIGN MULTIPLYASSIGN INCREMENT
%token DIVIDEASSIGN ADDASSIGN ANDASSIGN XORASSIGN  RIGHTSHIFT LEFTSHIFT NOTEQUAL EQUALEQUAL 
%token DECREMENT POINTER ORASSIGN AND LESSTHANEQUAL GREATERTHANEQUAL OR LEFTSHIFTASSIGN ELLIPSIS 
%token PLUS AND MULTIPLY MINUS NOT DIVIDE PERCENTAGE GREATERTHAN LESSTHAN EQUAL OPENSQUARE CLOSESQUARE
%token OPENROUND CLOSEROUND OPENCURLY CLOSECURLY DOT EXCLAMATION COMMA HASH XOR QUESTIONMARK COLON SEMICOLON

// Others 
%token <intval> INT_CONSTANT 
%token <floatval> FLOAT_CONSTANT 
%token <symp> ENU_CONSTANT 
%token <symp> CHAR_CONSTANT 
%token <symp> IDENTIFIER 
%token <symp> STRING_LITERAL

%type <symp> primary_expression 
%type <symp> postfix_expression 
%type <symp> argument_expression_list 
%type <symp> unary_expression 
%type <symp> unary_operator
%type <symp> cast_expression 
%type <symp> multiplicative_expression 
%type <symp> additive_expression 
%type <symp> shift_expression 
%type <symp> relational_expression 
%type <symp> equality_expression 
%type <symp> AND_expression 
%type <symp> exclusive_OR_expression 
%type <symp> inclusive_OR_expression 
%type <symp> logical_and_expression 
%type <symp> logical_or_expression 
%type <symp> conditional_expression 
%type <symp> assignment_expression 
%type <symp> assignment_operator 
%type <symp> expression 
%type <symp> constant_expression 
%type <symp> declaration 
%type <symp> declaration_specifiers 
%type <symp> init_declarator_list 
%type <symp> init_declarator 
%type <symp> storage_class_specifier 
%type <symp> type_specifier 
%type <symp> specifier_qualifier_list 
%type <symp> enum_specifier 
%type <symp> enumerator_list 
%type <symp> enumerator 
%type <symp> type_qualifier 
%type <symp> function_specifier 
%type <symp> declarator 
%type <symp> direct_declarator 
%type <symp> type_qualifier_list_opt 
%type <symp> assignment_expression_opt 
%type <symp> pointer 
%type <symp> type_qualifier_list 
%type <symp> parameter_type_list 
%type <symp> parameter_list 
%type <symp> parameter_declaration 
%type <symp> identifier_list
%type <symp> type_name 
%type <symp> initializer 
%type <symp> initializer_list 
%type <symp> designation 
%type <symp> designator_list 
%type <symp> designator 
%type <symp> statement 
%type <symp> labeled_statement 
%type <symp> compound_statement 
%type <symp> block_item_list 
%type <symp> block_item 
%type <symp> expression_statement 
%type <symp> selection_statement 
%type <symp> iteration_statement 
%type <symp> jump_statement 
%type <symp> translation_unit 
%type <symp> external_declaration 
%type <symp> function_definition 
%type <symp> declaration_list 

%start <symp>  translation_unit

/*------------------------ Bison Specifications: Grammar Rules ---------------------------*/

%%

constant : INT_CONSTANT | FLOAT_CONSTANT | ENU_CONSTANT | CHAR_CONSTANT ;

primary_expression : IDENTIFIER | constant | STRING_LITERAL | OPENROUND expression CLOSEROUND { printf("PRIMARY_EXPRESSION\n");};

postfix_expression : primary_expression | postfix_expression OPENSQUARE expression CLOSESQUARE | postfix_expression OPENROUND CLOSEROUND | postfix_expression OPENROUND argument_expression_list CLOSEROUND | postfix_expression DOT IDENTIFIER | postfix_expression POINTER IDENTIFIER | postfix_expression INCREMENT | postfix_expression DECREMENT | OPENROUND type_name CLOSEROUND OPENCURLY initializer_list CLOSECURLY |  OPENROUND type_name CLOSEROUND OPENCURLY initializer_list COMMA CLOSECURLY {printf("POSTFIX_EXPRESSION\n");};

argument_expression_list : assignment_expression | argument_expression_list COMMA assignment_expression {printf("ARGUMENT EXPRESSION LIST\n");};

unary_expression : postfix_expression | INCREMENT unary_expression | DECREMENT unary_expression
| unary_operator cast_expression | SIZEOF unary_expression | SIZEOF OPENROUND type_name CLOSEROUND
{printf("UNARY EXPRESSION\n");};

unary_operator: AND | MULTIPLY | PLUS | MINUS | NOT | EXCLAMATION {printf("UNARY OPERATOR\n");};

cast_expression : unary_expression | OPENROUND type_name CLOSEROUND cast_expression {printf("CAST EXPRESSION\n");};


multiplicative_expression : cast_expression | multiplicative_expression MULTIPLY cast_expression
| multiplicative_expression DIVIDE cast_expression | multiplicative_expression PERCENTAGE cast_expression
{printf("MULTIPLICATIVE EXPRESSION\n");};


additive_expression : multiplicative_expression | additive_expression PLUS multiplicative_expression | additive_expression MINUS multiplicative_expression {printf("ADDITIVE EXPRESSION\n");};


shift_expression : additive_expression | shift_expression LEFTSHIFT additive_expression | shift_expression RIGHTSHIFT additive_expression {printf("SHIFT EXPRESSION\n");};


relational_expression : shift_expression | relational_expression LESSTHAN shift_expression | relational_expression GREATERTHAN shift_expression | relational_expression LESSTHANEQUAL shift_expression | relational_expression GREATERTHANEQUAL shift_expression {printf("RELATIONAL EXPRESSION\n");};


equality_expression : relational_expression | equality_expression EQUALEQUAL relational_expression | equality_expression NOTEQUAL relational_expression {printf("EQUALITY EXPRESSION\n");};


AND_expression : equality_expression | AND_expression AND equality_expression {printf("AND_expression\n");};


exclusive_OR_expression : AND_expression | exclusive_OR_expression XOR AND_expression {printf("EXCLUSIVE OR EXPRESSION \n");}; 


inclusive_OR_expression : exclusive_OR_expression | inclusive_OR_expression '|' exclusive_OR_expression {printf("INCLUSIVE OR EXPRESSION\n");};


logical_and_expression : inclusive_OR_expression | logical_and_expression AND inclusive_OR_expression {printf("LOGICAL AND EXPRESSION\n");};


logical_or_expression : logical_and_expression | logical_or_expression OR logical_and_expression {printf("LOGICAL OR EXPRESSION \n");};


conditional_expression : logical_or_expression | logical_or_expression QUESTIONMARK expression COLON conditional_expression {printf("CONDITIONAL EXPRESSION\n");};


assignment_expression : conditional_expression | unary_expression assignment_operator assignment_expression {printf("ASSIGNMENT EXPRESSION\n");};


assignment_operator : EQUAL | MULTIPLYASSIGN | DIVIDEASSIGN | MODASSIGN | ADDASSIGN | SUBASSIGN | LEFTSHIFTASSIGN | RIGHTSHIFTASSIGN | ANDASSIGN | XORASSIGN | ORASSIGN {printf("ASSIGNMENT OPERATOR\n");};


expression : assignment_expression | expression COMMA assignment_expression {printf("EXPRESSION\n");};


constant_expression : conditional_expression {printf("CONSTANT EXPRESSION\n");};


declaration : declaration_specifiers SEMICOLON | declaration_specifiers init_declarator_list SEMICOLON {printf("DECLARATION\n");};


declaration_specifiers : storage_class_specifier | storage_class_specifier declaration_specifiers | type_specifier | type_specifier declaration_specifiers | type_qualifier | type_qualifier declaration_specifiers | function_specifier  | function_specifier declaration_specifiers {printf("DECLARATION SPECIFIERS\n");};


init_declarator_list : init_declarator | init_declarator_list COMMA init_declarator {printf("INIT DECLARATOR LIST\n");};


init_declarator : declarator | declarator EQUAL initializer {printf("INIT DECLARATOR\n");};


storage_class_specifier : EXTERN | STATIC | AUTO | REGISTER {printf("STORAGE CLASS SPECIFIER\n");};


type_specifier : VOID | CHAR | SHORT | INT | LONG | FLOAT | DOUBLE | SIGNED | UNSIGNED | BOOL | COMPLEX | IMAGINARY | enum_specifier {printf("TYPE SPECIFIER\n");};


specifier_qualifier_list : type_specifier specifier_qualifier_list | type_specifier | type_qualifier specifier_qualifier_list | type_qualifier {printf("SPECIFIER_QUALIFIER_LIST\n");};



enum_specifier : ENUM OPENCURLY enumerator_list CLOSECURLY | ENUM IDENTIFIER OPENCURLY enumerator_list CLOSECURLY | ENUM OPENCURLY enumerator_list COMMA CLOSECURLY | ENUM IDENTIFIER OPENCURLY enumerator_list COMMA CLOSECURLY | ENUM IDENTIFIER {printf("ENUM_SPECIFIER\n");};


enumerator_list : enumerator | enumerator_list COMMA enumerator {printf("ENUMERATOR_LIST\n");};


enumerator : IDENTIFIER | IDENTIFIER EQUAL constant_expression {printf("ENUMERATOR\n");};


type_qualifier : CONST | VOLATILE | RESTRICT {printf("TYPE QUAIFIER \n");};


function_specifier : INLINE {printf("FUNCTION SPECIFIER\n");};


declarator : pointer direct_declarator | direct_declarator {printf("DECLARATOR\n");};


direct_declarator : IDENTIFIER | OPENROUND declarator CLOSEROUND | direct_declarator OPENSQUARE  type_qualifier_list_opt assignment_expression_opt CLOSESQUARE | direct_declarator OPENSQUARE STATIC type_qualifier_list_opt assignment_expression CLOSESQUARE | direct_declarator OPENSQUARE type_qualifier_list_opt MULTIPLY CLOSESQUARE | direct_declarator OPENROUND parameter_type_list CLOSEROUND | direct_declarator OPENROUND identifier_list CLOSEROUND | direct_declarator OPENROUND CLOSEROUND {printf("DIRECT_DECLARATOR\n");};


type_qualifier_list_opt : %empty | type_qualifier_list {printf("TYPE QUALIFIER LIST OPT\n");};


assignment_expression_opt : %empty | assignment_expression {printf("ASSIGNMENT EXPRESSION OPT\n");};


pointer : MULTIPLY | MULTIPLY type_qualifier_list | MULTIPLY pointer | MULTIPLY type_qualifier_list pointer {printf("POINTER\n");};


type_qualifier_list : type_qualifier | type_qualifier_list type_qualifier {printf("TYPE QUALIFIER LIST\n");};


parameter_type_list : parameter_list | parameter_list COMMA ELLIPSIS {printf("PARAMETER TYPE LIST\n");};


parameter_list : parameter_declaration | parameter_list COMMA parameter_declaration {printf("PARAMETER LIST\n");};


parameter_declaration : declaration_specifiers declarator | declaration_specifiers {printf("PARAMETER DECLARATION\n");};


identifier_list: IDENTIFIER | identifier_list COMMA IDENTIFIER {printf("IDENTIFIER LIST\n");};


type_name : specifier_qualifier_list {printf("TYPE NAME\n");};


initializer : assignment_expression | OPENCURLY initializer_list CLOSECURLY | OPENCURLY initializer_list COMMA CLOSECURLY{printf("INITIALIZER\n");};


initializer_list : initializer | designation initializer | initializer_list COMMA initializer |  initializer_list COMMA designation initializer {printf("INITIALIZER LIST\n");};


designation : designator_list EQUAL {printf("DESIGNATION\n");};


designator_list : designator | designator_list designator {printf("DESIGNATOR LIST\n");};


designator : OPENSQUARE constant_expression CLOSESQUARE | DOT IDENTIFIER {printf("DESIGNATOR\n");};


statement : labeled_statement | compound_statement | expression_statement | selection_statement | iteration_statement | jump_statement {printf("STATEMENT\n");} ;


labeled_statement : IDENTIFIER COLON statement | CASE constant_expression COLON statement | DEFAULT COLON statement {printf("LABELED STATMENT\n");};


compound_statement : OPENCURLY CLOSECURLY | OPENCURLY block_item_list CLOSECURLY {printf("COMPOUND STATEMENT\n");};


block_item_list : block_item | block_item_list block_item {printf("BLOCK ITEM LIST\n");};


block_item : declaration | statement {printf("BLOCK ITEM\n");};


expression_statement : SEMICOLON | expression SEMICOLON {printf("EXPRESSION STATEMENT\n");};


selection_statement : IF OPENROUND expression CLOSEROUND statement | IF OPENROUND expression CLOSEROUND statement ELSE statement | SWITCH OPENROUND expression CLOSEROUND statement {printf("SELECTION STATEMENT\n");};


iteration_statement : WHILE OPENROUND expression CLOSEROUND statement | DO statement WHILE OPENROUND expression CLOSEROUND SEMICOLON | FOR OPENROUND expression_statement expression_statement CLOSEROUND statement | FOR OPENROUND expression_statement expression_statement expression CLOSEROUND statement {printf("ITERATION STATEMENT\n");};


jump_statement : GOTO IDENTIFIER SEMICOLON | CONTINUE SEMICOLON | BREAK SEMICOLON | RETURN SEMICOLON | RETURN expression SEMICOLON {printf("JUMP STATEMENT\n");} ;


translation_unit : external_declaration | translation_unit external_declaration {printf("TRANSLATION UNIT\n");};


external_declaration : function_definition | declaration {printf("EXTERNAL DECLARATION\n");};


function_definition : declaration_specifiers declarator declaration_list compound_statement | declaration_specifiers declarator compound_statement | declarator declaration_list compound_statement | declarator compound_statement {printf("FUNCTION DEFINITION\n");};


declaration_list : declaration | declaration_list declaration {printf("DECLARATION LIST\n");};

%%

/*--------------- Additional C code ----------------*/

/*--------------- Func for error ------------------*/
void yyerror(string s) {
	printf ("ERROR IS : %s\n",s);
}

/*------------ Functions related to symbol table ---------*/
struct symboltable *symlook(string s) {
  struct symboltable *it;

  for (it = symtab; it < &symtab[MAX_SYMBOLS]; it++) {
    // is symbol s already here
    if (it->name && it->name !=  s) {
      return it;
    }
    // if iterator has reached an empty slot in the symboltable, use that slot
    if (!it->name) {
      it->name = strdup(s);
      return it;
    }
  }
  yyerror("Too many symbols!\n");
  exit(1);
}

struct symboltable *gentemp() {
  static int c = 0; //temp counter for variables
  char str[10]; //temp name
  sprintf(str, "t%02d", c++);
  return symlook(str);
}

void update(struct symboltable *name, string type, int size, int offset) {
  struct symboltable *item = symlook(name);
  item->type = strdup(type);
  item->size = size;
  item->offset = offset;
}

void print() {
  struct symboltable *it;
  for (it = symtab; it < &symtab[MAX_SYMBOLS]; it++) {
    printf("%s\t%s\t%s\t%d\t%d\t%p\n", it->name, it->type, it->value, it->size, it->offset, it->nested_table);
  }
}

/*--------------- Functions related to handling unconditional jump ----------------*/
void handle_label(string label_id) {

  vector<label>::iterator it;

  for (it = labeltabel.begin(); it != labeltabel.end(); it++) {

    //if it exists in the labeltable
    if (it->name == label_id) {
      if (it->addr == NULL) {
        it->addr = nextinstr;
        backpatch(it->list , addr);
        it->list = NULL;
        return;
      }

      else{
        yyerror("Duplicate definition of label %s\n", it->name);
        return;
      }
    }

  }
  //if it does not exist in the table
  it->addr = nextinstr;
  it->list = NULL;

}

void handle_goto(string label_id){
  vector<label>::iterator it;

  for (it = labeltabel.begin(); it != labeltabel.end(); it++) {

      // if the label has been used
      if (label_id == it->name) {

      // label has been used before but not declared
      // add this line to the list of usages
        if (it->addr) {
          it->list = merge(it->list, makelist(nextinstr));
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
  it->list = makelist(nextinstr);

}
