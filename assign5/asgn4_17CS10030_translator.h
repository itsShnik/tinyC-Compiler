/*---------------------------------------------------
| Nikhil Shah (17CS10030)
| Apoorve Singhal (17CS30007)
| File: Header files and some function declarations 
| Written on: Sep. 28, 2019
---------------------------------------------------*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class symboltable {
  string name;
  string type;
  string value;
  int size;
  int offset;
  void *nested_table;
};

symboltable *symlook(string s);
symboltable *gentemp();
void update(symboltable *name, string type, int size, int offset);
void print();
void emit(string result, string arg1, string arg2, string op);

class expression {
  symboltable *loc;
};

class label {
  string name;
  int addr;
  vector<int> list;

  label() {
    addr = 0;
  }
};

void lookup(string label_id);

class boolean_expression {
  symboltable *loc;
  vector<int> truelist; 
  vector<int> falselist; 
};

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
  vector<int>::iterator it;

  for (it = p.begin(); it != p.end(); it++) {
    qArray[*it].result = to_string(i);
  }
}

class statement {
  vector<int> nextlist;
};

class declaration {
  string type;
};

class identifier {
  symboltable *loc;
};

typedef enum {
  PLUS = 1,
  MINUS,
  MULT,
  DIV,
  UNARYMINUS,
  COPY,
  UNCONDITIONAL_JUMP,
  CONDITIONAL_JUMP,
  PROCEDURE_CALL,
  RETURN
} opcodeType;

class quad {
  opcodeType op;
  string result, arg1, arg2;

  public:

    // for binary and unary operators
    void emit(opcodeType op1, string s1, string s2, string s3 = 0):
      op(op1), result(s1), arg1(s2), arg2(s3) {}

    // for instructions with int constants
    void emit(opcodeType op1, string s1, int num):
      op(op1), result(s1), arg1(0), arg2(0) {
        arg1 = to_string(num);
      }

    // for instructions with float constants
    void emit(opcodeType op1, string s1, float num):
      op(op1), result(s1), arg1(0), arg2(0) {
        arg1 = to_string(num);
      }

    // for copy statement
    void emit(string s1, string s2):
      op(COPY), result(s1), arg1(s2), arg2(0) {}

    // for goto statement
    void emit(opcodeType op1, string s1):
      op(op1), result(s1) {}

    void print() {
      if ((op <= DIV) && (op >= PLUS)) {
        printf("%s = %s ", result, arg1);
        switch(op) {
          case PLUS: printf("+"); break;
          case MINUS: printf("-"); break;
          case MULT: printf("*"); break;
          case DIV: printf("/"); break;
        }
        printf(" %s\n", arg2);
      }
      else if (op == UNARYMINUS) {
          printf("%s = - %s\n", result, arg1);
      }
      else if (op == COPY) {
        printf("%s = %s\n", result, arg1);
      }
      else if (op == UNCONDITIONAL_JUMP) {
        printf("goto %s\n", result);
      }
    }
};



