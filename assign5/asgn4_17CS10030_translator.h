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

class statement {
  vector<int> nextlist;
};

class declaration {
  string type;
};

class identifier {
  symboltable *loc;
};

enum opcodeType{
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
};

class quad {
  opcodeType op;
  string result, arg1, arg2;

  public:

    // for binary and unary operators
    void emit(opcodeType op1, string s1, string s2, string s3 = 0);

    // for instructions with int constants
    void emit(opcodeType op1, string s1, int num);

    // for instructions with float constants
    void emit(opcodeType op1, string s1, float num);

    // for copy statement
    void emit(string s1, string s2);

    // for goto statement
    void emit(opcodeType op1, string s1);

    void print();
};



