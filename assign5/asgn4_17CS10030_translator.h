/* 
 * Symboltable definition
 */

struct symboltable {
  char *name;
  char *type;
  char *init_val;
  int size;
  int offset;
  void *nested_table;
}

struct symboltable *symlook(char *s);
struct symboltable *gentemp();
void update(struct symboltable *name, char *type, int size, int offset);
void print();



