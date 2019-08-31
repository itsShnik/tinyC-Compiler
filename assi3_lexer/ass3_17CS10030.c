#include <stdio.h>

extern char* yytext;

int main() {

  int token;
  while (token = yylex()) {

    switch (token) {

    	case ESCAPE_SEQUENCE:
    		printf("<ESCAPE CHARACTER, %d, %s>\n",token, yytext);
  			break;

  		case KEYWORD:
  			printf("<KEYWORD, %d, %s>\n",token, yytext);
  			break;

		case IDENTIFIER: 
			printf("<IDENTIFIER, %d, %s>\n",token, yytext); 
			break;

		case INTEGER_CONSTANT: 
			printf("<INTEGER CONSTANT, %d, %s>\n",token, yytext); 
			break;

		case FLOATING_CONSTANT: 
			printf("<FLOAT CONSTANT, %d, %s>\n",token, yytext); 
			break;

		case ENUMERATION_CONSTANT: 
			printf("<ENUMERATION CONSTANT, %d, %s>\n",token, yytext); 
			break;

		case CHAR_CONSTANT: 
			printf("<CHARACTER CONSTANT, %d, %s>\n",token, yytext); 
			break;

		case STRING_CONSTANT: 
			printf("<STRING LITERAL, %d, %s>\n",token, yytext); 
			break;

		case PUNCTUATOR: 
			printf("<PUNCTUATOR, %d, %s>\n",token, yytext); 
			break;

		case COMMENT: 
			printf("<COMMENT, %d>\n",token); 
			break;

		default: 
			printf("<PUNCTUATOR, %d, %s>\n",token, yytext); 
			break;
    }
  }
}
