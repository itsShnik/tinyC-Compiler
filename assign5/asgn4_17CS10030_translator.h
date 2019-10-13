#ifndef __HEAD__
#define __HEAD__

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
  public:
    string name;
    string type;
    int size;
    int offset;
    void *nested_table;
};

symboltable *symlook(string s);
symboltable *gentemp();
void update(symboltable *name, string type, int size, int offset);
void print();
void emit(string result, string arg1, string arg2, string op);
void backpatch(vector<int> p, int i);
vector<int> makelist(int i);
vector<int> merge(vector<int> l1, vector<int> l2);

class expression_class {
  public:
    symboltable *loc;
};


class label {
  public:
    string name;
    int addr;
    vector<int> list;

    label() {
      addr = 0;
    }
};

void lookup(string label_id);

class boolean_expression_class {
  public:
    symboltable *loc;
    vector<int> truelist; 
    vector<int> falselist; 
};

class statement_class {
  public:
    vector<int> nextlist;
};

class declaration {
  public:
    string type;
};

class identifier_class {
  public:
    symboltable *loc;
};

enum opcodeType{
  plus_ins = 1,
  minus_ins,
  mult_ins,
  div_ins,
  unaryminus_ins,
  copy_ins,
  unconditional_jump_ins,
  conditional_jump_ins,
  procedure_call_ins,
  return_ins
};

class quad {
  public:
    opcodeType op;
    string result, arg1, arg2;

    // for binary and unary operators
    quad(opcodeType op1, string s1, string s2, string s3);

    quad(opcodeType op1, string s1, string s2);

    // for instructions with int constants
    quad(opcodeType op1, string s1, int num);

    // for instructions with float constants
    quad(opcodeType op1, string s1, float num);

    // for copy statement
    quad(string s1, string s2);

    // for goto statement
    quad(opcodeType op1, string s1);

    void print();
};

#endif
