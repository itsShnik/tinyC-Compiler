%{
#include <stdio.h>
#include <string.h>
extern int yylex();
void yyerror(char *s);
%}

%start translation_unit

%token CONSTANT
%token STRING_LITERAL
%token IDENTIFIER

%token END 0

%token ARROW_ACCESS
%token INCREMENT
%token DECREMENT
%token SIZEOF
%token LEFT_SHIFT
%token RIGHT_SHIFT
%token LESSER_EQUAL
%token GREATER_EQUAL
%token IS_EQUAL
%token NOT_EQUAL
%token LOGICAL_AND
%token LOGICAL_OR
%token MULT_ASSIGN
%token DIV_ASSIGN
%token ADD_ASSIGN
%token SUB_ASSIGN
%token REM_ASSIGN
%token LEFT_SHIFT_ASSIGN
%token RIGHT_SHIFT_ASSIGN
%token BITWISE_AND_ASSIGN
%token BITWISE_XOR_ASSIGN
%token BITWISE_OR_ASSIGN
%token EXTERN
%token STATIC 
%token AUTO
%token REGISTER

%token VOID
%token CHAR
%token SHORT
%token INT
%token LONG
%token FLOAT
%token DOUBLE
%token SIGNED
%token UNSIGNED
%token BOOL
%token COMPLEX
%token IMAGINARY
%token ENUM

%token CONST
%token RESTRICT
%token VOLATILE
%token INLINE
%token THREE_DOTS
%token CASE
%token DEFAULT
%token IF
%token ELSE
%token SWITCH
%token WHILE
%token DO
%token FOR
%token GOTO
%token CONTINUE
%token BREAK
%token RETURN
%token STRUCT
%token TYPEDEF
%token UNION


%%
primary_expression: IDENTIFIER 
                  | CONSTANT 
                  | STRING_LITERAL 
                  | '(' expression ')'
                  ;
  
postfix_expression: primary_expression
                  | postfix_expression '[' expression ']' 
                  | postfix_expression '(' argument_expression_list_opt ')'
                  | postfix_expression '.' IDENTIFIER
                  | postfix_expression ARROW_ACCESS IDENTIFIER
                  | postfix_expression INCREMENT
                  | postfix_expression DECREMENT
                  | '(' type_name ')' '{' initializer_list '}'
                  | '(' type_name ')' '{' initializer_list ',' '}'
                  ;

argument_expression_list_opt: argument_expression_list
                         | %empty
                         ;

argument_expression_list: assignment_expression
                     | argument_expression_list ',' assignment_expression
                     ;

unary_expression: postfix_expression
                | INCREMENT unary_expression
                | DECREMENT unary_expression
                | unary_operator cast_expression
                | SIZEOF unary_expression
                | SIZEOF '(' type_name ')' 
                ;

unary_operator: '&' | '*' | '+' | '-' | '~' | '!'
              ;

cast_expression: unary_expression
               | '(' type_name ')' cast_expression
               ;

multiplicative_expression: cast_expression
                         | multiplicative_expression '*' cast_expression
                         | multiplicative_expression '/' cast_expression
                         | multiplicative_expression '%' cast_expression
                         ;

additive_expression: multiplicative_expression
                   | additive_expression '+' multiplicative_expression
                   | additive_expression '-' multiplicative_expression
                   ;

shift_expression: additive_expression
                | shift_expression LEFT_SHIFT additive_expression
                | shift_expression RIGHT_SHIFT additive_expression
                ;

relational_expression: shift_expression
                     | relational_expression '<' shift_expression
                     | relational_expression '>' shift_expression
                     | relational_expression LESSER_EQUAL shift_expression
                     | relational_expression GREATER_EQUAL shift_expression
                     ;

equality_expression: relational_expression
                   | equality_expression IS_EQUAL relational_expression
                   | equality_expression NOT_EQUAL relational_expression
                   ;

and_expression: equality_expression
              | and_expression '&' equality_expression
              ;

exclusive_or_expression: and_expression
                       | exclusive_or_expression '^' and_expression
                       ;

inclusive_or_expression: exclusive_or_expression
                       | inclusive_or_expression '|' exclusive_or_expression
                       ;

logical_and_expression: inclusive_or_expression
                      | logical_and_expression LOGICAL_AND logical_or_expression
                      ;

logical_or_expression: logical_and_expression
                     | logical_or_expression LOGICAL_OR logical_and_expression
                     ;

conditional_expression: logical_or_expression
                      | logical_or_expression '?' expression ':' conditional_expression
                      ;

assignment_expression: conditional_expression
                     | unary_expression assignment_operator assignment_expression
                     ;

assignment_operator: '=' | MULT_ASSIGN | DIV_ASSIGN | REM_ASSIGN | ADD_ASSIGN | SUB_ASSIGN | LEFT_SHIFT_ASSIGN | RIGHT_SHIFT_ASSIGN | BITWISE_AND_ASSIGN | BITWISE_XOR_ASSIGN | BITWISE_OR_ASSIGN
                   ;

expression: assignment_expression
          | expression ',' assignment_expression
          ;

constant_expression: conditional_expression
                   ;

declaration: declaration_specifiers init_declarator_list_opt
           {printf("DECLARATION\n");}
           ;

init_declarator_list_opt: init_declarator_list
                        | %empty
                        ;

declaration_specifiers: storage_class_specifier declaration_specifiers_opt
                      | type_specifier declaration_specifiers_opt
                      | type_qualifier declaration_specifiers_opt
                      | function_specifier declaration_specifiers_opt
                      ;

declaration_specifiers_opt: declaration_specifiers
                          | %empty
                          ;

init_declarator_list: init_declarator
                     | init_declarator_list ',' init_declarator
                     ;

init_declarator: declarator
               | declarator '=' initializer
               {printf("INIT DECLARATOR\n");}
               ;

storage_class_specifier: EXTERN
                       | STATIC
                       | AUTO
                       | REGISTER
                       ; 

type_specifier: VOID
              | CHAR
              | SHORT
              | INT
              | LONG
              | FLOAT
              | DOUBLE
              | SIGNED
              | UNSIGNED
              | BOOL
              | COMPLEX
              | IMAGINARY
              | enum_specifier
              ;

specifier_qualifier_list: type_specifier specifier_qualifier_list_opt
                        | type_qualifier specifier_qualifier_list_opt
                        ;

specifier_qualifier_list_opt: specifier_qualifier_list
                            | %empty
                            ;

enum_specifier: ENUM identifier_opt '{' enumerator_list '}'
              | ENUM identifier_opt '{' enumerator_list ',' '}'
              | ENUM IDENTIFIER
              ;

identifier_opt: IDENTIFIER
              | %empty
              ;
 
enumerator_list: enumerator
               | enumerator_list ',' enumerator
               ;

enumerator: IDENTIFIER
          | IDENTIFIER '=' constant_expression
          ;

type_qualifier: CONST
              | RESTRICT
              | VOLATILE
              ;

function_specifier: INLINE
                  ;

declarator: pointer_opt direct_declarator
          {printf("DECLARATOR\n");}
          ;

pointer_opt: pointer
           | %empty
           ;

direct_declarator: IDENTIFIER
                 | '(' declarator ')'
                 | direct_declarator '[' type_qualifier_list_opt assignment_expression_opt ']'
                 | direct_declarator '[' STATIC type_qualifier_list_opt assignment_expression ']'
                 | direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'
                 | direct_declarator '[' type_qualifier_list_opt '*' ']'
                 | direct_declarator '(' parameter_type_list ')'
                 | direct_declarator '(' identifier_list_opt ')'
                 ;

type_qualifier_list_opt: type_qualifier_list
                       | %empty
                       ;

assignment_expression_opt: assignment_expression
                         | %empty
                         ;

identifier_list_opt: identifier_list
                   | %empty
                   ;

pointer: '*' type_qualifier_list_opt
       | '*' type_qualifier_list_opt pointer
       ;

type_qualifier_list: type_qualifier
                   | type_qualifier_list type_qualifier
                   ;

parameter_type_list: parameter_list
                   | parameter_list ',' THREE_DOTS
                   ;

parameter_list: parameter_declaration
              | parameter_list ',' parameter_declaration
              ;

parameter_declaration: declaration_specifiers declarator
                     | declaration_specifiers
                     ;

identifier_list: IDENTIFIER
               | identifier_list ',' IDENTIFIER
               ;

type_name: specifier_qualifier_list
         ;

initializer: assignment_expression
           | '{' initializer_list '}'
           | '{' initializer_list ',' '}'
           ;

initializer_list: designation_opt initializer
                | initializer_list ',' designation_opt initializer
                ;

designation_opt: designation
               | %empty
               ;

designation: designator_list '='
           ;

designator_list: designator
               | designator_list designator
               ;

designator: '[' constant_expression ']'
          | '.' IDENTIFIER
          ;

statement: labeled_statement
         | compound_statement
         | expression_statement
         | selection_statement
         | iteration_statement
         | jump_statement
         ;

labeled_statement: IDENTIFIER ':' statement
                 | CASE constant_expression ':' statement
                 | DEFAULT ':' statement
                 ;

compound_statement: '{' block_item_list_opt '}'
                  ;

block_item_list_opt: block_item_list
                   | %empty
                   ;

block_item_list: block_item
               | block_item_list block_item
               ;

block_item: declaration
          | statement
          ;

expression_statement: expression_opt
                    ;

expression_opt: expression
              | %empty
              ;

selection_statement: IF '(' expression ')' statement
                   | IF '(' expression ')' statement ELSE statement
                   | SWITCH '(' expression  ')' statement
                   ;

iteration_statement: WHILE '(' expression ')' statement
                   | DO statement WHILE '(' expression ')' ';'
                   | FOR '(' expression_opt ';' expression_opt ';' expression_opt ')' statement 
                   | FOR '(' declaration expression_opt ';' expression_opt ')' statement 
                   ;

jump_statement: GOTO IDENTIFIER ';'
              | CONTINUE ';'
              | BREAK ';'
              | RETURN expression_opt ';'
              ;

translation_unit: external_declaration
                | translation_unit external_declaration
                ;

external_declaration: function_definition
                    | declaration
                     {printf("EXTERNAL DECLARATION\n");}
                    ;

function_definition: declaration_specifiers declarator declaration_list_opt compound_statement
                   ;

declaration_list_opt: declaration_list
                    | %empty
                    ;

declaration_list: declaration
                | declaration_list declaration
                ;

%%

void yyerror(char *err) {
  printf("The following error has been detected: %s\n", err);
}
