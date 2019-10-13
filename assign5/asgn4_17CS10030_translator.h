/* 
 * Symboltable definition
 */

class symboltable {
  string name;
  string type;
  string value;
  int size;
  int offset;
  void *nested_table;
}

struct symboltable *symlook(string s);
struct symboltable *gentemp();
void update(struct symboltable *name, string type, int size, int offset);
void print();
void emit(string result, string arg1, string arg2, string op);

class expression {
  struct symboltable *loc;
  string value;
}

class label {
  string name;
  int addr;
  vector<int> list;

  label() {
    addr = 0;
  }
}

void lookup(string label_id);

class boolean_expression {
  struct symboltable *loc;
  vector<int> truelist; 
  vector<int> falselist; 
}

vector<int> makelist(int i) {
  vector<int> list;  
  list.push_back(i);
  return list;
}

vector<int> merge(vector<int> l1, vector<int> l2) {
  vector<int> l3 = l1;
  l3.insert(l3.end(), l2.begin(), l2.end());
  return l3;
}

void backpatch(vector<int> p, int i) {
  // for each quad in p, the goto address should be i
}

class statement {
  vector<int> nextlist;
}

class declaration {
  string type;
}


