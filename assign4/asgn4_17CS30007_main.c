#include <stdio.h>
#include "y.tab.h"

extern int yyparse();
extern char *yytext;

int main() {
  yyparse();
  return 0;
}

