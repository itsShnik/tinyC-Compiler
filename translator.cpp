/*-----------------------------------------------
| Nikhil Shah (17CS10030)
| Apoorve Singhal (17CS30007)
| File: Bison Specifications for Compiler
| Written on: Sept. 28, '19
| Last Modified: Oct. 14, '19
-----------------------------------------------*/

#include "translator.h"
using namespace std;

symboltable* globalTable;					
quadArray q;							
string Type;							
symboltable* table;						
sym* currentSymbol; 					
int debugflag = 1;

symtype::symtype(string t, symtype* p, int w){ 
	if(debugflag == 0){
		cout << "cout reached symtype constructor" << endl;
	}
	this->type = t; 
	this->ptr = p; 
	this->width = w;
}

// overloaded constructors for quad
quad::quad (string s, string s1, string s3, string s2){
	if(debugflag == 0){
		cout << "cout reached quad constructor" << endl;
	}
	this->result = s;
	this->arg1 = s1; 
	this->arg2 = s2; 
	this->op  = s3;
}
quad::quad (string s, int arg1, string s3, string s2){
	if(debugflag == 0){
		cout << "cout reached quad constructor2" << endl;
	}
	this->result = s;
	this->arg2 = s2;
	this -> op  = s3;
	stringstream strs;
	strs << arg1;
	string temp_str = strs.str();
	char* intStr = (char*) temp_str.c_str();
	string str = string(intStr);
	this->arg1 = str;
}
quad::quad (string s, float arg1, string s3, string s2){
	if(debugflag == 0){
		cout << "cout reached quad constructor3" << endl;
	}
	this->result = s; 
	this->arg2 = s2; 
	this->op = s3; 
	std::ostringstream buff;
	buff<<arg1;
	this->arg1 = buff.str();
}

void quad::print () {
	if(debugflag == 0){
		cout << "cout reached print" << endl;
	}	
	if (op=="ADD")					cout << result << " = " << arg1 << " + " << arg2;
	else if (op=="SUB")				cout << result << " = " << arg1 << " - " << arg2;
	else if (op=="MULT")			cout << result << " = " << arg1 << " * " << arg2;
	else if (op=="DIVIDE")			cout << result << " = " << arg1 << " / " << arg2;
	else if (op=="LEFTOP")			cout << result << " = " << arg1 << " << " << arg2;
	else if (op=="RIGHTOP")			cout << result << " = " << arg1 << " >> " << arg2;
	else if (op=="EQUAL")			cout << result << " = " << arg1 ;				
	else if (op=="XORLQ")			cout << result << " = " << arg1 << "^=" << arg2;
	else if (op=="EQOP")			cout << "if " << arg1 <<  " == " << arg2 << " goto " << result;
	else if (op=="NEOP")			cout << "if " << arg1 <<  " != " << arg2 << " goto " << result;
	else if (op=="LT")				cout << "if " << arg1 <<  " < "  << arg2 << " goto " << result;
	else if (op=="GT")				cout << "if " << arg1 <<  " > "  << arg2 << " goto " << result;
	else if (op=="GE")				cout << "if " << arg1 <<  " >= " << arg2 << " goto " << result;
	else if (op=="LE")				cout << "if " << arg1 <<  " <= " << arg2 << " goto " << result;
	else if (op=="GOTOOP")			cout << "goto " << result;		
	else if (op=="MODOP")			cout << result << " = " << arg1 << " % " << arg2;
	else if (op=="XOR")				cout << result << " = " << arg1 << " ^ " << arg2;
	else if (op=="INOR")			cout << result << " = " << arg1 << " | " << arg2;
	else if (op=="BAND")			cout << result << " = " << arg1 << " & " << arg2;
	else if (op=="EQOP")			cout << "if " << arg1 <<  " == " << arg2 << " goto " << result;
	else if (op=="NEOP")			cout << "if " << arg1 <<  " != " << arg2 << " goto " << result;
	else if (op=="LT")				cout << "if " << arg1 <<  " < "  << arg2 << " goto " << result;
	else if (op=="GT")				cout << "if " << arg1 <<  " > "  << arg2 << " goto " << result;
	else if (op=="GE")				cout << "if " << arg1 <<  " >= " << arg2 << " goto " << result;
	else if (op=="LE")				cout << "if " << arg1 <<  " <= " << arg2 << " goto " << result;
	else if (op=="GOTOOP")			cout << "goto " << result;		
	else if (op=="JUMPTO")			cout << result << " = " << arg1 << "-->" << arg2;
	else if (op=="ADDRESS")			cout << result << " = &" << arg1;
	else if (op=="PTRR")			cout << result	<< " = *" << arg1 ;
	else if (op=="PTRL")			cout << "*" << result	<< " = " << arg1 ;
	else if (op=="UMINUS")			cout << result 	<< " = -" << arg1;
	else if (op=="BNOT")			cout << result 	<< " = ~" << arg1;
	else if (op=="LNOT")			cout << result 	<< " = !" << arg1;
	else if (op=="SWITCH")			cout << result << " = " << arg1 << "rand" << arg2;
	else if (op=="GT")				cout << "if " << arg1 <<  " > "  << arg2 << " goto " << result;
	else if (op=="GE")				cout << "if " << arg1 <<  " >= " << arg2 << " goto " << result;
	else if (op=="LE")				cout << "if " << arg1 <<  " <= " << arg2 << " goto " << result;
	else if (op=="GOTOOP")			cout << "goto " << result;		
	else if (op=="CASE")			cout << result << " = " << arg1 << "rand" << arg2;
	else if (op=="ADDRESS")			cout << result << " = &" << arg1;
	else if (op=="PTRR")			cout << result	<< " = *" << arg1 ;
	else if (op=="PTRL")			cout << "*" << result	<< " = " << arg1 ;
	else if (op=="UMINUS")			cout << result 	<< " = -" << arg1;
	else if (op=="BNOT")			cout << result 	<< " = ~" << arg1;
	else if (op=="LNOT")			cout << result 	<< " = !" << arg1;
	else if (op=="SHUFF")			cout << result << " = " << arg1 << "\\" << arg2;
	else if (op=="MODOP")			cout << result << " = " << arg1 << " % " << arg2;
	else if (op=="XOR")				cout << result << " = " << arg1 << " ^ " << arg2;
	else if (op=="INOR")			cout << result << " = " << arg1 << " | " << arg2;
	else if (op=="BAND")			cout << result << " = " << arg1 << " & " << arg2;
	else if (op=="EQOP")			cout << "if " << arg1 <<  " == " << arg2 << " goto " << result;
	else if (op=="NEOP")			cout << "if " << arg1 <<  " != " << arg2 << " goto " << result;
	else if (op=="LT")				cout << "if " << arg1 <<  " < "  << arg2 << " goto " << result;
	else if (op=="GT")				cout << "if " << arg1 <<  " > "  << arg2 << " goto " << result;
	else if (op=="GE")				cout << "if " << arg1 <<  " >= " << arg2 << " goto " << result;
	else if (op=="LE")				cout << "if " << arg1 <<  " <= " << arg2 << " goto " << result;
	else if (op=="GOTOOP")			cout << "goto " << result;		
	else if (op=="RANDOM")			cout << result << " = " << arg1 << "rand" << arg2;
	else if (op=="LEFTOP")			cout << result << " = " << arg1 << " << " << arg2;
	else if (op=="RIGHTOP")			cout << result << " = " << arg1 << " >> " << arg2;
	else if (op=="EQUAL")			cout << result << " = " << arg1 ;				
	else if (op=="EQOP")			cout << "if " << arg1 <<  " == " << arg2 << " goto " << result;
	else if (op=="NEOP")			cout << "if " << arg1 <<  " != " << arg2 << " goto " << result;
	else if (op=="LT")				cout << "if " << arg1 <<  " < "  << arg2 << " goto " << result;
	else if (op=="GT")				cout << "if " << arg1 <<  " > "  << arg2 << " goto " << result;
	else if (op=="GE")				cout << "if " << arg1 <<  " >= " << arg2 << " goto " << result;
	else if (op=="LE")				cout << "if " << arg1 <<  " <= " << arg2 << " goto " << result;
	else if (op=="GOTOOP")			cout << "goto " << result;		
	else if (op=="PLLRL")			cout << result << " = " << arg1 << "//" << arg2;
	else if (op=="ADDRESS")			cout << result << " = &" << arg1;
	else if (op=="PTRR")			cout << result	<< " = *" << arg1 ;
	else if (op=="PTRL")			cout << "*" << result	<< " = " << arg1 ;
	else if (op=="UMINUS")			cout << result 	<< " = -" << arg1;
	else if (op=="BNOT")			cout << result 	<< " = ~" << arg1;
	else if (op=="LNOT")			cout << result 	<< " = !" << arg1;
	else if (op=="ANDL")			cout << result << " = " << arg1 << "and" << arg2;
	else if (op=="ARRR")	 		cout << result << " = " << arg1 << "[" << arg2 << "]";
	else if (op=="ARRL")	 		cout << result << "[" << arg1 << "]" <<" = " <<  arg2;
	else if (op=="RETURN") 			cout << "ret " << result;
	else if (op=="PARAM") 			cout << "param " << result;
	else if (op=="CALL") 			cout << result << " = " << "call " << arg1<< ", " << arg2;
	else if (op=="LABEL")			cout << result << ": ";	
	else							cout << "op";			
	cout << endl;
}

void quadArray::print() {
	if(debugflag == 0){
		cout << "cout reached quadarray print" << endl;
	}
	cout << setw(130) << setfill ('=') << "="<< endl;
	cout << "Some notes, conventions and clarifications" << endl;
	cout << "1. If the name of a function appears twice in the three adress code, it is because\n there is one for the prototype declaration and the other for the definition" << endl;
	cout << "2. 'param' indicates that the next variable is passed as a parameter to function" << endl;
	cout << setw(130) << setfill ('=') << "="<< endl << endl;
	if(debugflag == 0){
		cout << "cout reached here" << endl;
	}
	cout << setw(130) << setfill ('=') << "="<< endl;
	cout << "Three Adress Codes (TAC)" << endl;
	cout << setw(130) << setfill ('-') << "-"<< setfill (' ') << endl;
	for (vector<quad>::iterator it = array.begin(); it!=array.end(); it++) {
		if(debugflag == 0){
				cout << "cout reached here" << endl;
			}
		if (it->op != "LABEL") {
			if(debugflag == 0){
				cout << "cout reached here" << endl;
			}
			cout << "\t" << setw(4) << it - array.begin() << ":\t";
			it->print();
		}
		else { 
			if(debugflag == 0){
				cout << "cout reached here" << endl;
			}
			cout << "\n";
			it->print();
			cout << "\n";
		}
	}
	cout << setw(130) << setfill ('-') << "-"<< endl;
}

sym::sym (string n, string t, symtype* p, int w): name(n)  {
	if(debugflag == 0){
				cout << "cout reached sym constructor" << endl;
			}
	type = new symtype (t, p, w);
	nested = NULL;
	initial_value = "";
	offset = 0;
	size = size_type(type);
}

sym* sym::update(symtype* t) {
	if(debugflag == 0){
		cout << "cout reached update" << endl;
		debugflag == 1;
	}
	type = t;
	this -> size = size_type(t);
	return this;
}

symboltable::symboltable (string n){
	if(debugflag == 0){
				cout << "cout reached symboltable constructor" << endl;
			}
	this->name = n;
	this->count = 0;
}

void symboltable::print() {
	if(debugflag == 0){
		cout << "cout reached print st" << endl;
		debugflag = 1;
	}
	list<symboltable*> tablelist;
	cout << setw(130) << setfill ('=') << "="<< endl;
	cout << "Symbol Table: " << setfill (' ') << left << setw(50)  << this -> name ;
	cout << right << setw(25) << "Parent: ";
	if(debugflag == 0){
		cout << "cout reached print in symboltable" << endl;
	}
	if (this->parent!=NULL)
		cout << this -> parent->name;
	else cout << "null" ;
	cout << endl;
	cout << setw(130) << setfill ('-') << "-"<< endl;
	cout << setfill (' ') << left << setw(20) << "Name";
	cout << left << setw(25) << "Type";
	cout << left << setw(20) << "Initial Value";
	cout << left << setw(12) << "Size";
	cout << left << setw(12) << "Offset";
	cout << left << "Nested" << endl;
	cout << setw(130) << setfill ('-') << "-"<< setfill (' ') << endl;
	if(debugflag == 0){
		cout << "cout reached here" << endl;
	}
	for (list <sym>::iterator it = table.begin(); it!=table.end(); it++) {
		cout << left << setw(20) << it->name;
		string stype = print_type(it->type);
		cout << left << setw(25) << stype;
		cout << left << setw(17) << it->initial_value;
		cout << left << setw(12) << it->size;
		cout << left << setw(11) << it->offset;
		cout << left;
		if(debugflag == 0){
			cout << "cout reached for loop in symboltable" << endl;
		}
		if (it->nested == NULL) {
			if(debugflag == 0){
				cout << "cout reached if in st" << endl;
			}
			cout << "null" <<  endl;	
		}
		else {
			if(debugflag == 0){
				cout << "cout reached else in st" << endl;
			}
			cout << it->nested->name <<  endl;
			tablelist.push_back (it->nested);
		}
	}
	cout << setw(130) << setfill ('-') << "-"<< setfill (' ') << endl;
	cout << endl;
	for (list<symboltable*>::iterator iterator = tablelist.begin();iterator != tablelist.end();++iterator) 
	{
		if(debugflag == 0){
			cout << "cout reached update in st" << endl;
		}
		(*iterator)->print();
	}		
}

void symboltable::update() {
	if(debugflag == 0){
		cout << "cout reached update in st" << endl;
	}
	list<symboltable*> tablelist;
	int off;
	for (list <sym>::iterator it = table.begin(); it!=table.end(); it++) {
		if(debugflag == 0){
				cout << "cout reached for loop st update" << endl;
			}
		if (it==table.begin()) {
			if(debugflag == 0){
				cout << "cout reached if st update here" << endl;
			}
			it->offset = 0;
			off = it->size;
		}
		else {
			if(debugflag == 0){
				cout << "cout reached else in st" << endl;
			}
			it->offset = off;
			off = it->offset + it->size;
		}
		if (it->nested!=NULL) tablelist.push_back (it->nested);
	}
	if(debugflag == 0){
		cout << "cout reached if in st" << endl;
	}
	for (list<symboltable*>::iterator iterator = tablelist.begin(); iterator != tablelist.end(); ++iterator) {
	    if(debugflag == 0){
			cout << "cout reached for in st" << endl;
		}
		(*iterator)->update();
	}
}

sym* symboltable::lookup (string name) {
	sym* s;
	list <sym>::iterator it;
	for (it = table.begin(); it!=table.end(); it++) {
		if (it->name == name ) break;
	}
	if(debugflag == 0){
		cout << "cout reached lookup in st" << endl;
	}
	if (it!=table.end() ) {
		return &*it;
	}
	else {
		if(debugflag == 0){
			cout << "cout reached else in st lookup" << endl;
		}	
		s =  new sym (name);
		table.push_back (*s);
		return &table.back();
	}
}


void emit(string op, string result, string arg1, string arg2) {
	if(debugflag == 0){
		cout << "cout reached  in emit" << endl;
	}
	q.array.push_back(*(new quad(result,arg1,op,arg2)));
}
void emit(string op, string result, int arg1, string arg2) {
	if(debugflag == 0){
		cout << "cout reached emit 2" << endl;
	}
	q.array.push_back(*(new quad(result,arg1,op,arg2)));
}
void emit(string op, string result, float arg1, string arg2) {
	if(debugflag == 0){
		cout << "cout reached emit 3" << endl;
	}
	q.array.push_back(*(new quad(result,arg1,op,arg2)));
}


sym* conv (sym* s, string t) {
	sym* temp = gentemp(new symtype(t));
	if (s->type->type=="INTEGER" ) {
		if(debugflag == 0){
			cout << "cout reached in conv sym" << endl;
		}
		if (t=="DOUBLE") {
			if(debugflag == 0){
				cout << "cout reached " << endl;
			}	
			emit ("EQUAL", temp->name, "int2double(" + s->name + ")");
			return temp;
		}
		else if (t=="CHAR") {
			if(debugflag == 0){
				cout << "cout reached here" << endl;
			}
			emit ("EQUAL", temp->name, "int2char(" + s->name + ")");
			return temp;
		}
		return s;
	}
	else if (s->type->type=="DOUBLE" ) {
		if (t=="INTEGER") {
			if(debugflag == 0){
				cout << "cout reached here" << endl;
			}
			emit ("EQUAL", temp->name, "double2int(" + s->name + ")");
			return temp;
		}
		else if (t=="CHAR") {
			if(debugflag == 0){
				cout << "cout reached here" << endl;
			}
			emit ("EQUAL", temp->name, "double2char(" + s->name + ")");
			return temp;
		}
		return s;
	}
	else if (s->type->type=="CHAR") {
		if (t=="INTEGER") {
			if(debugflag == 0){
				cout << "cout reached here" << endl;
			}
			emit ("EQUAL", temp->name, "char2int(" + s->name + ")");
				return temp;
			}
		if (t=="DOUBLE") {
			if(debugflag == 0){
				cout << "cout reached here" << endl;
			}
			emit ("EQUAL", temp->name, "char2double(" + s->name + ")");
				return temp;
			}
		return s;
	}
	return s;
}


bool typecheck(sym*& s1, sym*& s2){ 	
	symtype* type1 = s1->type;
	symtype* type2 = s2->type;
	if(debugflag == 0){
		cout << "cout reached in typecheck" << endl;
	}
	if ( typecheck (type1, type2) ) return true;
	else if (s1 = conv (s1, type2->type) ) return true;
	else if (s2 = conv (s2, type1->type) ) return true;
	else return false;
}

bool typecheck(symtype* t1, symtype* t2){ 	
	if(debugflag == 0){
		cout << "cout reached here" << endl;
	}
	if (t1 != NULL || t2 != NULL) {
		if(debugflag == 0){
			cout << "cout reached here" << endl;
		}
		if (t1==NULL) return false;
		if (t2==NULL) return false;
		if (t1->type==t2->type) return typecheck(t1->ptr, t2->ptr);
		else return false;
	}
	if(debugflag == 0){
		cout << "cout reached here" << endl;
	}
	return true;
}

void backpatch (list <int> l, int addr) {
	if(debugflag == 0){
		cout << "cout reached backpatch" << endl;
	}
	stringstream strs;
    strs << addr;
    string temp_str = strs.str();
    char* intStr = (char*) temp_str.c_str();
	string str = string(intStr);
	for (list<int>::iterator it= l.begin(); it!=l.end(); it++) {
		if(debugflag == 0){
			cout << "cout reached for if in backpatch" << endl;
		}
		q.array[*it].result = str;
	}
}


list<int> makelist (int i) {
	if(debugflag == 0){
		cout << "cout reached in makelist" << endl;
	}
	list<int> l(1,i);
	return l;
}
list<int> merge (list<int> &a, list <int> &b) {
	if(debugflag == 0){
		cout << "cout reached merge" << endl;
	}
	a.merge(b);
	return a;
}

expr* convertInt2Bool (expr* e) {	
	if(debugflag == 0){
		cout << "cout reached in convert int to bool" << endl;
	}
	if (e->type!="BOOL") {
		if(debugflag == 0){
			cout << "cout reached here" << endl;
		}
		e->falselist = makelist (nextinstr());
		emit ("EQOP", "", e->loc->name, "0");
		e->truelist = makelist (nextinstr());
		emit ("GOTOOP", "");
	}
}
expr* convertBool2Int (expr* e) {	
	if(debugflag == 0){
		cout << "cout reached here" << endl;
	}
	if (e->type=="BOOL") {
		if(debugflag == 0){
			cout << "cout reached here" << endl;
		}
		e->loc = gentemp(new symtype("INTEGER"));
		backpatch (e->truelist, nextinstr());
		emit ("EQUAL", e->loc->name, "true");
		stringstream strs;
	    strs << nextinstr()+1;
	    string temp_str = strs.str();
	    char* intStr = (char*) temp_str.c_str();
		string str = string(intStr);
		if(debugflag == 0){
			cout << "cout reached here" << endl;
		}
		emit ("GOTOOP", str);
		backpatch (e->falselist, nextinstr());
		emit ("EQUAL", e->loc->name, "false");
	}
}

void changeTable (symboltable* newtable) {	
	if(debugflag == 0){
		cout << "cout reached here" << endl;
	}
	table = newtable;
} 


int nextinstr() {
	if(debugflag == 0){
		cout << "cout reached here" << endl;
	}
	return q.array.size();
}

sym* gentemp (symtype* t, string init) {
	if(debugflag == 0){
		cout << "cout reached here" << endl;
	}
	char n[10];
	sprintf(n, "t%02d", table->count++);
	sym* s = new sym (n);
	s->type = t;
	s->size=size_type(t);
	if(debugflag == 0){
		cout << "cout reached here" << endl;
	}
	s-> initial_value = init;
	table->table.push_back ( *s);
	return &table->table.back();
}

int size_type (symtype* t){
	if(debugflag == 0){
		cout << "cout reached here" << endl;
	}
	if(t->type=="VOID")	return 0;
	else if(t->type=="CHAR") return CHAR_SIZE;
	else if(t->type=="INTEGER")return INT_SIZE;
	else if(t->type=="DOUBLE") return  DOUBLE_SIZE;
	if(debugflag == 0){
		cout << "cout reached here" << endl;
	}
	else if(t->type=="PTR") return POINTER_SIZE;
	else if(t->type=="ARR") return t->width * size_type (t->ptr);
	else if(t->type=="FUNC") return 0;
}


string print_type (symtype* t){
	if(debugflag == 0){
		cout << "cout reached here" << endl;
	}
	if (t==NULL) return "null";
	if(t->type=="VOID")	return "void";
	else if(t->type=="CHAR") return "char";
	else if(t->type=="INTEGER") return "integer";
	else if(t->type=="DOUBLE") return "double";
	else if(t->type=="PTR") return "ptr("+ print_type(t->ptr)+")";
	else if(t->type=="ARR") {
		if(debugflag == 0){
			cout << "cout reached here" << endl;
		}
		stringstream strs;
	    strs << t->width;
	    string temp_str = strs.str();
	    char* intStr = (char*) temp_str.c_str();
		string str = string(intStr);
		return "arr(" + str + ", "+ print_type (t->ptr) + ")";
		}
	else if(t->type=="FUNC") return "function";
	else return "_";
}



int  main (int argc, char* argv[]){
	globalTable = new symboltable("Global");
	if(debugflag == 0){
		cout << "cout reached here" << endl;
	}
	table = globalTable;
	if(debugflag == 0){
		cout << "cout reached here" << endl;
	}
	yyparse();
	if(debugflag == 0){
		cout << "cout reached here" << endl;
	}
	globalTable->update();
	q.print();
	globalTable->print();
};
