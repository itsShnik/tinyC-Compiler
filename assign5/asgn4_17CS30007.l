/****************************
Authors:
	Apoorve Singhal
	17CS30007
	Nikhil Shah
	17CS10030
*****************************/

%{
#include "y.tab.h"
%}

/*************** Regular Expressions Definitons *******************/

IDENTIFIER_NONDIGIT [a-zA-Z_]
DIGIT [0-9]
NONZERO_DIGIT [1-9]
DIGIT_SEQUENCE {DIGIT}+
SIGN "+"|"-"

IDENTIFIER {IDENTIFIER_NONDIGIT}({IDENTIFIER_NONDIGIT}|{DIGIT})*

INTEGER_CONSTANT {NONZERO_DIGIT}({DIGIT}*)

FRACTIONAL_CONSTANT ({DIGIT_SEQUENCE}{0,1}"."{DIGIT_SEQUENCE})|({DIGIT_SEQUENCE}".")
EXPONENT_PART ("e"|"E")({SIGN}{0,1}){DIGIT_SEQUENCE}
FLOATING_CONSTANT ({FRACTIONAL_CONSTANT}({EXPONENT_PART}{0,1}))|({DIGIT_SEQUENCE}{EXPONENT_PART})

ESCAPE_SEQUENCE "\\\'"|"\\\""|"\\\?"|"\\\\"|"\\a"|"\\b"|"\\f"|"\\n"|"\\r"|"\\t"|"\\v"
C_CHAR [^\'\n\\]|{ESCAPE_SEQUENCE}
C_CHAR_SEQUENCE {C_CHAR}+
CHARACTER_CONSTANT "'"{C_CHAR_SEQUENCE}"'"

CONSTANT ({INTEGER_CONSTANT}|{FLOATING_CONSTANT}|{CHARACTER_CONSTANT})

S_CHAR [^\"\n\\]|{ESCAPE_SEQUENCE}
S_CHAR_SEQUENCE {S_CHAR}+
STRING_LITERAL "\""({S_CHAR_SEQUENCE}{0,1})"\""

%x MULTI_LINE_COMMENT
START_MULTI_LINE_COMMENT "/*"
EAT_MULTI_LINE_COMMENT ([^*]*)|(\*+[^*/]*)
END_MULTI_LINE_COMMENT ("*/")|(\*+\/)

SINGLE_LINE_COMMENT \/\/.*$

%%

/******************* Rules and return statements *************/

<MULTI_LINE_COMMENT>{END_MULTI_LINE_COMMENT} BEGIN(INITIAL);
{START_MULTI_LINE_COMMENT} BEGIN(MULTI_LINE_COMMENT);
<MULTI_LINE_COMMENT>{EAT_MULTI_LINE_COMMENT}
{SINGLE_LINE_COMMENT}

"extern" return EXTERN;
"static" return STATIC;
"auto" return AUTO;
"register" return REGISTER;
"void" return VOID;
"char" return CHAR;
"short" return SHORT;
"int" return INT;
"long" return LONG;
"float" return FLOAT;
"double" return DOUBLE;
"signed" return SIGNED;
"unsigned" return UNSIGNED;
"_Bool" return BOOL;
"_Complex" return COMPLEX;
"_Imaginary" return IMAGINARY;
"enum" return ENUM;
"const" return CONST;
"restrict" return RESTRICT;
"volatile" return VOLATILE;
"inline" return INLINE;
"..." return THREE_DOTS;
"case" return CASE;
"default" return DEFAULT;
"if" return IF;
"else" return ELSE;
"switch" return SWITCH;
"while" return WHILE;
"do" return DO;
"for" return FOR;
"goto" return GOTO;
"continue" return CONTINUE;
"break" return BREAK;
"return" return RETURN;
"struct" return STRUCT;
"typedef" return TYPEDEF;
"union" return UNION;

{STRING_LITERAL} return STRING_LITERAL;
{IDENTIFIER} return IDENTIFIER;
{CONSTANT} return CONSTANT;

"->" return ARROW_ACCESS;
"++" return INCREMENT;
"--" return DECREMENT;
"sizeof" return SIZEOF;
"<<" return LEFT_SHIFT;
">>" return RIGHT_SHIFT;
"<=" return LESSER_EQUAL;
">=" return GREATER_EQUAL;
"==" return IS_EQUAL;
"!=" return NOT_EQUAL;
"&&" return LOGICAL_AND;
"||" return LOGICAL_OR;
"*=" return MULT_ASSIGN;
"/=" return DIV_ASSIGN;
"+=" return ADD_ASSIGN;
"-=" return SUB_ASSIGN;
"%=" return REM_ASSIGN;
"<<=" return LEFT_SHIFT_ASSIGN;
">>=" return RIGHT_SHIFT_ASSIGN;
"&=" return BITWISE_AND_ASSIGN;
"^=" return BITWISE_XOR_ASSIGN;
"|=" return BITWISE_OR_ASSIGN;

(.|\n) 
<<EOF>> return END;
%%
