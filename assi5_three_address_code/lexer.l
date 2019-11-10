/*-----------------------------------------------
| Nikhil Shah (17CS10030)
| Apoorve Singhal (17CS30007)
| File: flex specifications for Compiler
| Written on: Sept. 28, '19
| Last Modified: Oct. 14, '19
-----------------------------------------------*/

/*------------------ C/C++ Declarations -------------------------*/
%{
#include <stdio.h>
#include <string.h>
#include "translator.h"
#include "parser.tab.h"
%}

/*------------ Regular Expression Definitions -------------------------*/

SINGLE_LINE_COMMENT			"//"[^("\n")]*
MULTI_LINE_COMMENT			"/*"[^"*"]*"*"("*"|([^"/*"]*[^"*"]*"*"))*"/"
COMMENT 					{SINGLE_LINE_COMMENT}|{MULTI_LINE_COMMENT}
KEYWORD_A					"auto"|"break"|"case"|"char"|"const"|"continue"|"default"|"do"|"double"|"else"
KEYWORD_B					"enum"|"extern"|"float"|"for"|"goto"|"if"|"inline"|"int"|"long"|"register"
KEYWORD_C					"restrict"|"return"|"short"|"signed"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"
KEYWORD_D 					"unsigned"|"void"|"volatile"|"while"|"_Bool"|"_Complex"|"_Imaginary"
KEYWORD 					{KEYWORD_A}|{KEYWORD_B}|{KEYWORD_C}|{KEYWORD_D}
DIGIT						[0-9]
IDENTIFIER_NONDIGIT 		[a-zA-Z]|"_"
IDENTIFIER 					{IDENTIFIER_NONDIGIT}({IDENTIFIER_NONDIGIT}|{DIGIT})*
NONZERO_DIGIT				[1-9]
NONZERO_INTEGER_CONSTANT	{NONZERO_DIGIT}({NONZERO_DIGIT}|{DIGIT})*
INTEGER_CONSTANT			{NONZERO_INTEGER_CONSTANT}|"0"
DIGIT_SEQUENCE				{DIGIT}+
SIGN 						"+"|"-"
EXPONENT_PART				("e"{SIGN}?{DIGIT_SEQUENCE})|("E"{SIGN}?{DIGIT_SEQUENCE})
FRACTIONAL_CONSTANT			(({DIGIT_SEQUENCE}?\.{DIGIT_SEQUENCE})|({DIGIT_SEQUENCE}\.))
FLOATING_CONSTANT			({FRACTIONAL_CONSTANT}{EXPONENT_PART}?)|({DIGIT_SEQUENCE}{EXPONENT_PART})
ENUMERATION_CONSTANT		{IDENTIFIER}
ESCAPE_SEQUENCE				"\'"|"\""|"\?"|"\\"|"\a"|"\b"|"\f"|"\n"|"\r"|"\t"|"\v"
C_CHAR 						{ESCAPE_SEQUENCE}|[^("\'"|"\\"|"\n")]
C_CHAR_SEQUENCE				{C_CHAR}+
CHARACTER_CONSTANT			'{C_CHAR_SEQUENCE}'
S_CHAR  					{ESCAPE_SEQUENCE}|[^("\""|"\\"|"\n")]
S_CHAR_SEQUENCE				{S_CHAR}+
STRING_LITERAL 				\"({S_CHAR_SEQUENCE}?)\"
PUNCTUATORA					"["|"]"|"("|")"|"{"|"}"|"."|"->"
PUNCTUATORB					"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"
PUNCTUATORC					"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"
PUNCTUATORD					"?"|":"|";"|"..."|","|"#"
PUNCTUATORE					"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="
PUNCTUATOR 					{PUNCTUATORA}|{PUNCTUATORB}|{PUNCTUATORC}|{PUNCTUATORD}|{PUNCTUATORE}


/*---------------------- Rules -------------------*/

%%

"auto"			{ return AUTO; }
"enum"			{ return ENUM; }
"restrict"		{ return RESTRICT; } 
"unsigned"		{ return UNSIGNED; }
"break"			{ return BREAK; }
"extern"		{ return EXTERN; }
"return"		{ return RETURN; }
"void"			{ return VOID; }
"case"			{ return CASE; }
"float"			{ return FLOAT; }
"short"			{ return SHORT; }
"volatile"		{ return VOLATILE; }
"char"		  	{ return CHAR; }
"for"			{ return FOR; }
"signed"	  	{ return SIGNED; }
"while"			{ return WHILE; }
"const"			{ return CONST; }
"goto"			{ return GOTO; }
"sizeof"		{ return SIZEOF; }
"_Bool"			{ return BOOL; }
"continue"		{ return CONTINUE; }
"if"			{ return IF; }
"static"		{ return STATIC; }
"_Complex"		{ return COMPLEX; }
"default"		{ return DEFAULT; }
"inline"		{ return INLINE; }
"struct"		{ return STRUCT; }
"_Imaginary"	{ return IMAGINARY; }
"do"			{ return DO; }
"int"			{ return INT; }
"switch"		{ return SWITCH; }
"double"		{ return DOUBLE; }
"long"			{ return LONG; }
"typedef"		{ return TYPEDEF; }
"else"			{ return ELSE; }
"register"		{ return REGISTER; }
"union"			{ return UNION; }


{STRING_LITERAL} { yylval.character_val = yytext; return STRING_LITERAL;}
{IDENTIFIER}	 { yylval.symp = table->lookup(yytext); return IDENTIFIER;}
{INTEGER_CONSTANT}	{ yylval.integer_val = atoi(yytext); return INTEGER_CONSTANT;}
{FLOATING_CONSTANT}	{ yylval.character_val = yytext; return FLOATING_CONSTANT;}
{CHARACTER_CONSTANT} { yylval.character_val = yytext; return CHARACTER_CONSTANT;}

"[" 	{ return SQBRAOPEN; }
"]" 	{ return SQBRACLOSE; }
"(" 	{ return ROBRAOPEN; }
")" 	{ return ROBRACLOSE; }
"{" 	{ return CURBRAOPEN; }
"}" 	{ return CURBRACLOSE; }
"." 	{ return DOT; }
"->" 	{ return ACC; }
"++" 	{ return INC; }
"--" 	{ return DEC; }
"&" 	{ return AMP; }
"*" 	{ return MUL; }
"+" 	{ return ADD; }
"-" 	{ return SUB; }
"~" 	{ return NEG; }
"!" 	{ return EXCLAIM; }
"/" 	{ return DIV; }
"%" 	{ return MODULO; }
"<<" 	{ return SHL; }
">>" 	{ return SHR; }
"<" 	{ return BITSHL; }
">" 	{ return BITSHR; }
"<=" 	{ return LTE; }
">=" 	{ return GTE; }
"==" 	{ return EQ; }
"!=" 	{ return NEQ; }
"^" 	{ return BITXOR; }
"|" 	{ return BITOR; }
"&&" 	{ return AND; }
"||" 	{ return OR; }
"?" 	{ return QUESTION; }
":" 	{ return COLON; }
";" 	{ return SEMICOLON; }
"..." 	{ return DOTS; }
"=" 	{ return ASSIGN; }
"*=" 	{ return STAREQ; }
"/=" 	{ return DIVEQ; }
"%=" 	{ return MODEQ; }
"+=" 	{ return PLUSEQ; }
"-=" 	{ return MINUSEQ; }
"<<=" 	{ return SHLEQ; }
">>=" 	{ return SHREQ; }
"&=" 	{ return BINANDEQ; }
"^=" 	{ return BINXOREQ; }
"|=" 	{ return BINOREQ; }
"," 	{ return COMMA; }
"#" 	{ return HASH; }
 
"\n"|" "|"\t"|{COMMENT} {}	

%%
