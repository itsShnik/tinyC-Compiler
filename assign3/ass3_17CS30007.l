/*
Apoorve Singhal
17CS30007
*/

%{
#include "tokens.h"
%}

IDENTIFIER_NONDIGIT [a-zA-Z_]
DIGIT [0-9]
NONZERO_DIGIT [1-9]
DIGIT_SEQUENCE {DIGIT}+
SIGN "+"|"-"

KEYWORD auto|break|case|char|const|continue|default|do|double|else|enum|extern|float|for|goto|if|inline|int|long|register|restrict|return|short|signed|sizeof|static|struct|switch|typedef|union|unsigned|void|volatile|while|_Bool|_Complex|_Imaginary

IDENTIFIER {IDENTIFIER_NONDIGIT}({IDENTIFIER_NONDIGIT}|{DIGIT})*

INTEGER_CONSTANT {NONZERO_DIGIT}({DIGIT}*)

FRACTIONAL_CONSTANT ({DIGIT_SEQUENCE}{0,1}"."{DIGIT_SEQUENCE})|({DIGIT_SEQUENCE}".")
EXPONENT_PART ("e"|"E")({SIGN}{0,1}){DIGIT_SEQUENCE}
FLOATING_CONSTANT ({FRACTIONAL_CONSTANT}({EXPONENT_PART}{0,1}))|({DIGIT_SEQUENCE}{EXPONENT_PART})

ESCAPE_SEQUENCE "\\\'"|"\\\""|"\\\?"|"\\\\"|"\\a"|"\\b"|"\\f"|"\\n"|"\\r"|"\\t"|"\\v"
C_CHAR [^\'\n\\]|{ESCAPE_SEQUENCE}
C_CHAR_SEQUENCE {C_CHAR}+
ENUMERATION_CONSTANT IDENTIFIER
CHARACTER_CONSTANT "'"{C_CHAR_SEQUENCE}"'"

CONSTANT ({INTEGER_CONSTANT}|{FLOATING_CONSTANT}|{ENUMERATION_CONSTANT}|{CHARACTER_CONSTANT})

S_CHAR [^\"\n\\]|{ESCAPE_SEQUENCE}
S_CHAR_SEQUENCE {S_CHAR}+
STRING_LITERAL "\""({S_CHAR_SEQUENCE}{0,1})"\""

PUNCTUATORS "["|"]"|"("|")"|"{"|"}"|"."|"->"|"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"%"|"<<"|">>"|<|>|<=|>=|==|!=|"^"|"|"|"&&"|"||"|"?"|":"|";"|"..."|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="|","|"#"

%x MULTI_LINE_COMMENT
START_MULTI_LINE_COMMENT "/*"
EAT_MULTI_LINE_COMMENT ([^*]*)|(\*+[^*/]*)
END_MULTI_LINE_COMMENT ("*/")|(\*+\/)

SINGLE_LINE_COMMENT \/\/.*$

%%
<MULTI_LINE_COMMENT>{END_MULTI_LINE_COMMENT} BEGIN(INITIAL); return COMMENT;
{START_MULTI_LINE_COMMENT} BEGIN(MULTI_LINE_COMMENT);
<MULTI_LINE_COMMENT>{EAT_MULTI_LINE_COMMENT}

{SINGLE_LINE_COMMENT} return COMMENT;
{KEYWORD} return KEYWORD;
{IDENTIFIER} return IDENTIFIER;
{INTEGER_CONSTANT} return INTEGER_CONSTANT;
{FLOATING_CONSTANT} return FLOATING_CONSTANT;
{ENUMERATION_CONSTANT} return ENUMERATION_CONSTANT;
{CHARACTER_CONSTANT} return CHARACTER_CONSTANT;
{STRING_LITERAL} return STRING_LITERAL;
{PUNCTUATORS} return PUNCTUATOR;
(.|\n) return USELESS;
<<EOF>> return END;
%%
