/*
Name: Nikhil Shah
Roll No: 17CS10030
Assignment 3 : Generate a Lexical Analyzer using FLEX
*/
%{
	/* C declarations and definitions*/
	#define KEYWORD 1
	#define IDENTIFIER 2
	#define INTEGER_CONSTANT 3
	#define FLOATING_CONSTANT 4
	#define ENUMERATION_CONSTANT 5
	#define CHAR_CONSTANT 6
	#define STRING_CONSTANT 7
	#define COMMENT 8 
	#define ESCAPE_SEQUENCE 9 
	#define PUNCTUATOR 10 
%}

/** Regular Expressions Definitions **/
/** Keywords mentioned in the assignment file **/
/** REGEX					Pattern **/
KEYWORD             		"auto"|"enum"|"restrict"|"unsigned"|"break"|"extern"|"return"|"void"|"case"|"float"|"short"|"volatile"|"char"|"for"|"signed"|"while"|"const"|"goto"|"sizeof"|"_Bool"|"continue"|"if"|"static"|"_Complex"|"default"|"inline"|"struct"|"_Imaginary"|"do"|"int"|"switch"|"double"|"long"|"typedef"|"else"|"register"|"union"
/** we include '_' in the ALPHABET since any C variable can start with '_' **/
ALPHABET					[a-zA-Z_]
DIGIT						[0-9]
NON_ZERO_DIGIT				[1-9]
/** Now we define the IDENTIFIER using above regular expressions **/
IDENTIFIER					{ALPHABET}({ALPHABET}|{DIGIT})*
/** Now we define the constants required **/
INTEGER_CONSTANT			{NON_ZERO_DIGIT}{DIGIT}*|0
/** Define FRACTIONAL_PART and EXPONENT_PART to further define FLOATING_CONSTANT **/
FRACTIONAL_PART				(({DIGIT}+)?\.{DIGIT}+)|(({DIGIT}+)\.)
EXPONENT_PART				([Ee][+-]?{DIGIT}+)
FLOATING_CONSTANT			({FRACTIONAL_PART}{EXPONENT_PART}?)|({DIGIT}+{EXPONENT_PART})
SIGNS						[+-]
/** Now we define the ENUMERATION_CONSTANT using IDENTIFIER **/
ENUMERATION_CONSTANT		{IDENTIFIER}
/** Define ESCAPE_SEQUENCE, C_CHAR, C_CHAR_SEQUENCE to further define CHAR_CONSTANT  **/
ESCAPE_SEQUENCE				\\['"?\\abfnrtv]
C_CHAR						[^'\\\n]|{ESCAPE_SEQUENCE}
C_CHAR_SEQUENCE				'({C_CHAR})+'
CHAR_CONSTANT				{C_CHAR_SEQUENCE}
/** Now we define the String Literals **/
S_CHAR						[^"\\\n]|{ESCAPE_SEQUENCE}
S_CHAR_SEQUENCE				\"({S_CHAR}+)\"
STRING_CONSTANT				{S_CHAR_SEQUENCE}
/** Now we define the PUNCTUATOR **/
PUNCTUATOR					"["|"]"|"("|")"|"{"|"}"|"."|"->"|"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"|"?"|":"|";"|"..."|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="|","|"#"
/** Now we define the Comments **/
SINGLE_LINE_COMMENT			[/][/].*
/** whitespaces **/
BACKOTHER					[ \t\v\n\f]

/** Patterns and Rules **/

%%
"/*"						{ comment(); return COMMENT;}
{SINGLE_LINE_COMMENT}		{ return COMMENT;}
{ESCAPE_SEQUENCE}			{ return ESCAPE_SEQUENCE;}
{PUNCTUATOR}				{ return PUNCTUATOR;}
{KEYWORD}					{ return KEYWORD;}
{STRING_CONSTANT}			{ return STRING_CONSTANT;}
{IDENTIFIER}				{ return IDENTIFIER;}
{INTEGER_CONSTANT}			{ return INTEGER_CONSTANT;}
{FLOATING_CONSTANT}			{ return FLOATING_CONSTANT;}
{ENUMERATION_CONSTANT}		{ return ENUMERATION_CONSTANT;}
{CHAR_CONSTANT}				{ return CHAR_CONSTANT;}
{BACKOTHER}					{ /* whitespace, so do nothing */}
%%

/** comment() function checks whether the commenting is proper **/
void comment(void){
	char curr, prev = 0;
	while((curr = input()) != 0){
		if(curr == '/' && prev == '*')
			return;
		prev = curr;
	}
	/* error("Improper Commenting"); */
}

