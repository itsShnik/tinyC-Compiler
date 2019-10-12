/*
 * Apoorve Singhal
 * 17CS30007
 */

#include <stdio.h>
#include "tokens.h"

extern int yylex();
extern char *yytext;

int main() {
  int token;
  while (token = yylex()) {
    switch(token) {
      case KEYWORD:
        printf("<KEYWORD, %d, %s>\n", token, yytext);
        break;
      case IDENTIFIER:
        printf("<IDENTIFIER, %d, %s>\n", token, yytext);
        break;
      case INTEGER_CONSTANT:
        printf("<INTEGER_CONSTANT, %d, %s>\n", token, yytext);
        break;
      case FLOATING_CONSTANT:
        printf("<FLOATING_CONSTANT, %d, %s>\n", token, yytext);
        break;
      case ENUMERATION_CONSTANT:
        printf("<ENUMERATION_CONSTANT, %d, %s>\n", token, yytext);
        break;
      case CHARACTER_CONSTANT:
        printf("<CHARACTER_CONSTANT, %d, %s>\n", token, yytext);
        break;
      case STRING_LITERAL:
        printf("<STRING_LITERAL, %d, %s>\n", token, yytext);
        break;
      case PUNCTUATOR:
        printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
        break;
      case COMMENT:
        printf("<COMMENT, %d>\n", token);
        break;
    }

  }
  return 0;
}
