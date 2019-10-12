/*
 * Apoorve Singhal
 * 17CS30007
 */

void yyerror(char *s) {
  printf("%s\n", s);
}

int main() {
  yyparse();
  return 0;
}
