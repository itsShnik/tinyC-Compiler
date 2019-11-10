#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include "ass6_17CS10030_17CS30007_translator.h"
#include <bits/stdc++.h>
#include <sstream>
#define pb push_back
#define mp make_pair
#define pii pair<ll,ll> 
#define pic pair<ll,char>
#define vi vector< ll > 
#define vvi vector< vi > 
#define vpi vector< pii > 
#define vvpi vector< vpi > 
#define in insert
#define sz size
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define mapp  map<string,int>


//Definitions of widths for printing
#define quad_TRANSLATION_WIDTH 30
#define W1 25
#define LEFTW 50
#define LEFTW2 20
#define W3 12
using namespace std;

//All of the global symbol table references are present in this 
symTable* globalsymbolTable;					// Sotres pointer to  the global symbol table
quadArray q;							// quad Array
string Type;							// Stores latest inferred type of the symbol table
symTable* table;						// pointer to the current scop symbol table
sym* currentsymbol; 					// pointer to Current symbol
map<string,int> typePrint;

/*	All the necessary maps for storing information
	oppsymbols stores the corresponding action string for each op code
*/
map<string,string> oppsymbols;
mapp typeSize;

string tostring(string addr){
	stringstream tempstr;
    tempstr << addr;
    string temp_str = tempstr.str();
    char* intStr = (char*) temp_str.c_str();
	string str = string(intStr);
	return str;
}
string tostring(int addr){
	stringstream tempstr;
    tempstr << addr;
    string temp_str = tempstr.str();
    char* intStr = (char*) temp_str.c_str();
	string str = string(intStr);
	return str;
}


sym_type::sym_type(string type, sym_type* ptr, int width): type(type),ptr(ptr),width(width){};             
	

/*Constructor for quad entry
A single quad entry contains the result of the computation, arg1,arg2, and the corresponding op code
*/
quad::quad (string result, string arg1, string op, string arg2):
	result (result), arg1(arg1), arg2(arg2), op (op){};
/*Overloading the constructor of quad for arg1 of type int
*/
quad::quad (string result, int arg1, string op, string arg2):
	result (result), arg2(arg2), op (op) {
		stringstream arg1_input;
	    arg1_input << arg1;
	    string str = arg1_input.str();
	    char* strptr = (char*) str.c_str(); //Converting C-styled char* arrays to string
		string Str(strptr);
		this->arg1 = Str;
}
/*Overloading the constructor of quad for arg1 of type float
*/
quad::quad (string result, float arg1, string op, string arg2):
	result (result), arg2(arg2), op (op) {
		ostringstream buff;
   		buff<<arg1;
		this->arg1 = buff.str();
}

void populate_op_sym(string result,string arg1,string arg2){

	//For all of the arithmetic operations
  	
	oppsymbols["ADD"] = result;
	oppsymbols["SUB"] = result;
	oppsymbols["MULT"] = result;
	oppsymbols["DIVIDE"] = result;
	oppsymbols["MODOP"] = result;
	oppsymbols["XOR"] = result;
	oppsymbols["INOR"] = result;
	oppsymbols["BAND"] = result;

  	oppsymbols["ADD"]=" = "+arg1+" + "+arg2;
	oppsymbols["SUB"]=" = "+arg1+" - "+arg2;
	oppsymbols["MULT"]=" = "+arg1+" * "+arg2;
	oppsymbols["DIVIDE"]=" = "+arg1+" / "+arg2;
	oppsymbols["MODOP"]=" = "+arg1+" % "+arg2;
	oppsymbols["XOR"]=" = "+arg1+" ^ "+arg2;
	oppsymbols["INOR"]=" = "+arg1+" | "+arg2;
	oppsymbols["BAND"]=" = "+arg1+" & "+arg2;


	oppsymbols["LEFTOP"]=result;
	oppsymbols["RIGHTOP"]=result;
	oppsymbols["EQUAL"]=result;

	
		
	oppsymbols["LEFTOP"]=result+" = "+arg1+" << "+arg2;
	oppsymbols["RIGHTOP"]=result+" = "+arg1+" >> "+arg2;
	oppsymbols["EQUAL"]=result+" = "+arg1;

	
	oppsymbols["ADDRESS"]=result;
	oppsymbols["PTRR"]=result ;
	oppsymbols["UMINUS"]=result;
	oppsymbols["BNOT"]=result;
	oppsymbols["LNOT"]=result;
	oppsymbols["ADDRESS"]=result+" = &"+arg1;
	oppsymbols["PTRR"]=result+" = *"+arg1 ;
	oppsymbols["PTRL"]="*"+result+" = "+arg1 ;
	oppsymbols["UMINUS"]=result+" = -"+arg1;
	oppsymbols["BNOT"]=result+" = ~"+arg1;
	oppsymbols["LNOT"]=result+" = !"+arg1;


	oppsymbols["EQOP"]="if "+arg1+" == "+arg2+" goto "+result;
	oppsymbols["NEOP"]="if "+arg1+" != "+arg2+" goto "+result;
	oppsymbols["LT"]="if "+arg1+" < "+arg2+" goto "+result;
	oppsymbols["GT"]="if "+arg1+" > "+arg2+" goto "+result;
	oppsymbols["GE"]="if "+arg1+" >= "+arg2+" goto "+result;
	oppsymbols["LE"]="if "+arg1+" <= "+arg2+" goto "+result;
	oppsymbols["GOTOOP"]="goto "+result;


	oppsymbols["ARRR"]=result+" = "+arg1+"["+arg2+"]";
	oppsymbols["ARRL"]=result+"["+arg1+"]"+" = "+arg2;
	oppsymbols["RETURN"]="ret "+result;
	oppsymbols["PARAM"]="param "+result;
	oppsymbols["CALL"]=result+" = "+"call "+arg1+", "+arg2;
	oppsymbols["FUNC"]=result+": ";
	oppsymbols["FUNCEND"]="";
}
void quad::print () {
	// Binary Operations
	populate_op_sym(result,arg1,arg2);
	string ans=oppsymbols.find(op)==oppsymbols.end()?"op":oppsymbols[op];
	cout<<ans<<endl;
}
void quadtablePrintStart(){
	cout<<setw(quad_TRANSLATION_WIDTH)<<setfill('=')<<"="<<endl;
	cout<<"quad Translation"<<endl;
	cout<<setw(quad_TRANSLATION_WIDTH)<<setfill('-')<< "-"<<setfill (' ')<<endl;
}
void quadtablePrintEnd(){
	cout<<setw(quad_TRANSLATION_WIDTH)<<setfill('-')<<"-"<<endl;
}
void quadArray::print() {
	//for printing the quadArray with correct width and indentation
	quadtablePrintStart();
	//here array is a vector of the current instructions corresponding to the quad object q
	//for labels and instructions we will have different printing formats

	for(int i = 0;i<array.size();i++)
	{
		if(array[i].op=="FUNCEND"){i++;continue;}
		if((int)(array[i].op=="FUNC")){
				cout<<"\t"<<setw(4)<<i<<":\t";
				array[i].print();
		}
		else{
			cout<<endl;
			array[i].print();
			cout<<endl;
		}
	}
	quadtablePrintEnd();	
}

/*
	Constructor for a name in the symbol table,
	adding a new entry into the symbol table for a non-terminal of a given name
*/
sym::sym (string name, string name1, sym_type* ptr, int width): name(name)  {

	type = new sym_type (name1, ptr, width);
	nested = NULL;          //Setting the nested value to null as this is the global symbol table
	initial_value = "";     //Initial empty string as the symbol table is empty initially
	category="";
	offset = 0;             //offset in the memory locations
	size = size_type(type);
}

/*Constructor for the symbol table update
Updating the symbol table information
*/
sym* sym::update(sym_type* t) {          
	type = t;
	this -> size = size_type(t);
	return this;
}

symTable::symTable (string name): name (name), count(0) {}

void symTable::print() {
	list<symTable*> tablelist;

	//Printing the symbol table information
	cout<<setw(115)<<setfill('=')<<"="<<endl;
	cout<<"symbol Table: "<<setfill(' ')<<left<<setw(LEFTW) <<this ->name;

	//For each symbol table object printing the name of the instance using this->name
	cout<<right<<setw(W1)<<"Parent: ";
	if (this->parent!=NULL)
		cout<<this -> parent->name;
	else 
		cout<<"null";
	cout<<endl;
	cout<<setw(2*LEFTW)<<setfill ('-')<<"-"<< endl;
	cout<<setfill(' ')<<left<<setw(LEFTW2)<<"Name";
	cout<<left<<setw(W1)<<"Type";
	cout << left << setw(15) << "Category";
	cout<<left<<setw(LEFTW2)<< "Initial Value";
	cout<<left<<setw(W3)<<"Size";
	cout<<left<<setw(W3)<<"Offset";
	cout<<left<<"Nested"<<endl;
	cout<<setw(115)<<setfill('-')<< "-"<<setfill(' ')<< endl;
	
	for (list<sym>::iterator it=table.begin();it!=table.end();it++) {

		cout<<left<<setw(LEFTW2)<< it->name;
		string stype = print_type(it->type);
		cout<<left<<setw(W1)<<stype;
		cout<<left<<setw(15) << it->category;
		cout<<left<<setw(17)<<it->initial_value;
		cout<<left<<setw(W3)<<it->size;
		cout<<left<<setw(11)<<it->offset;
		cout<<left;
		for (list<sym>::iterator itr=table.begin();itr!=table.end();itr++) {
			if(itr->nested != NULL)
				break;
		}
		if (it->nested != NULL) {
			cout<<it->nested->name <<  endl;
			tablelist.pb (it->nested);
		}
		else {
			cout << "null" <<  endl;	
		}
	}

	cout << setw(115) << setfill ('-') << "-"<< setfill (' ') << endl;
	cout <<endl;
	for (list<symTable*>::iterator iterator = tablelist.begin();iterator != tablelist.end();++iterator) {
	    	(*iterator)->print();
	}		
}

void symTable::update() {
	list<symTable*> tablelist;
	int off,roi;
	for (list <sym>::iterator it = table.begin(); it!=table.end(); it++) {
		if (it==table.begin()) {
			it->offset = 0;
			off = it->size;
			for (list <sym>::iterator iit = table.begin(); iit!=table.end(); iit++) {
				if (iit->name == name ) break;
			}
		}
		else {
			it->offset = off;
			off = it->offset + it->size;
			roi = off+it->offset;
		}
		if (it->nested!=NULL) tablelist.pb (it->nested);
	}

	list<symTable*>::iterator it ;
	it = tablelist.begin();
	while(it != tablelist.end()){
	    (*it)->update();
		++it;
	}
}

sym* symTable::lookup (string name) {
	sym* s;
	list <sym>::iterator it;

	for (it = table.begin(); it!=table.end(); it++) {
		if (it->name == name ) break;
	}
	if (it!=table.end() ) {
		return &*it;
	}
	else {
		//new symbol to be added to table
		s =  new sym (name);
		s->category = "local";
		table.pb (*s);
		return &table.back();
		}
}

/*For emitting the quad code for each action/*/
void emit(string op, string result, string arg1, string arg2) {
	q.array.pb(*(new quad(result,arg1,op,arg2)));
}
/* emit overloaded for integer arg1
*/
void emit(string op, string result, int arg1, string arg2) {
	q.array.pb(*(new quad(result,arg1,op,arg2)));
}
/*emit overloaded for float arguments
*/
void emit(string op, string result, float arg1, string arg2) {
	q.array.pb(*(new quad(result,arg1,op,arg2)));
}
/*For type casting and type conversion
*/

map<pair<string,string>,int> convmap;
string init_conv(sym *s,string t,sym* temp){
	if(s==NULL||s->type==NULL)return "";
	string S=s->type->type,T=t;
	for(int i = 0;i<S.length();i++){
		if (S[i]>='A' && S[i]<='Z')
			S[i] = S[i] - 'A'+'a';
		T[i] = tolower(T[i]);
	}
	
	transform(T.begin(),T.end(),T.begin(),::tolower);
	convmap[mp("INTEGER","FLOAT")]=convmap[mp("INTEGER","CHAR")] = convmap[mp("FLOAT","INTEGER")] = convmap[mp("FLOAT","CHAR")] = convmap[mp("CHAR","INTEGER")] = convmap[mp("CHAR","FLOAT")] = 1;
	return S+"2"+T+"("+s->name+")";
}
sym* conv (sym* s, string t) {
	sym* temp = gentemp(new sym_type(t));
	string ans=init_conv(s,t,temp);

	if(s!=NULL&&s->type!=NULL&&convmap.find(mp(s->type->type,t))!=convmap.end()){
		emit("EQUAL",temp->name,ans);
		return temp;
	}
	return s;
}

/* Check if the symbols have same type or not (input is reference to the pointer of sym)*/
bool typecheck(sym*& s1, sym*& s2){ 	
	sym_type* type1 = s1->type;
	sym_type* type2 = s2->type;
	if ( typecheck (type1, type2) ) return true;
	else if (s2 = conv (s2, type1->type) ) return true;
	else if (s1 = conv (s1, type2->type) ) return true;
	else return false;
}
/*	Check if the symbols have same type or not (input is reference to the pointer of sym)
	Given two pointer to symbols in the corresponding symbol table
	to check whether they are of the same type */
bool typecheck(sym_type* t1, sym_type* t2){ 	
	if (t1 != NULL || t2 != NULL) {
		if (t1==NULL||t2==NULL) 
			return false;
		if (t1->type==t2->type) 
			return typecheck(t1->ptr, t2->ptr);
		return false;
	}
	return true;
}

void backpatch (list <int> l, int addr) {
	string str=tostring(addr);
	for (list<int>::iterator it = l.begin(); it!=l.end(); it++) {
		q.array[*it].result = str;
	}
}


list<int> makelist (int i) {
	list<int> l(1,i);
	return l;
}
list<int> merge (list<int> &a, list <int> &b) {
	a.merge(b);
	return a;
}
/*Expression conversion of boolean from integer
*/
expr* int2bool (expr* e) {	
	if (e->type!="BOOL") {
		e->falselist = makelist (nextinstr());
		emit ("EQOP", "", e->loc->name, "0");
		e->truelist = makelist (nextinstr());
		emit ("GOTOOP", "");
	}
}
/*Expression conversion of integer to boolean
*/
expr* bool2int (expr* e) {	
	if (e->type=="BOOL") {
		e->loc = gentemp(new sym_type("INTEGER"));
		backpatch (e->truelist, nextinstr());
		emit ("EQUAL", e->loc->name, "true");
		stringstream tempstr;
	    tempstr << nextinstr()+1;
	    string temp_str = tempstr.str();
	    char* intStr = (char*) temp_str.c_str();
		string str = string(intStr);
		emit ("GOTOOP", str);
		backpatch (e->falselist, nextinstr());
		emit ("EQUAL", e->loc->name, "false");
	}
}

void changeTable (symTable* newtable) {	// Change current symbol table
	table = newtable;
} 


int nextinstr() {
	return q.array.size();
}

sym* gentemp (sym_type* t, string init) {
	char n[10];
	sprintf(n, "t%02d", table->count++);
	sym* s = new sym (n);
	s->type = t;
	s->size=size_type(t);
	s-> initial_value = init;
	s->category = "temp";
	table->table.pb ( *s);
	return &table->table.back();
}
void populate_size_type(){
	string mytypes[10] = { "VOID", "CHAR","INTEGER","FLOAT","PTR","FUNC"};
	for(int i = 0;i<6;i++)
		typeSize[mytypes[i]]=0;
	typeSize[mytypes[0]]=0;
	typeSize[mytypes[1]]=CHAR_SIZE;
	typeSize[mytypes[2]]=INT_SIZE;
	typeSize[mytypes[3]]=FLOAT_SIZE;
	typeSize[mytypes[4]]=POINTER_SIZE;
	typeSize[mytypes[5]]=0;
}

int size_type (sym_type* t){
	populate_size_type();
	if(t->type=="ARR") 
		return t->width * size_type (t->ptr);
	return typeSize[t->type];
}


void pop_type_map(){
	string mytypes[10] = { "VOID", "CHAR","INTEGER","FLOAT","PTR","ARR","FUNC"};
	for(int i = 0;i<7;i++)
		typePrint[mytypes[i]] = i+1;

}
string print_type (sym_type* t){
	if (t==NULL) return "null";
	string str = tostring(t->width);
	pop_type_map();
	int swt = typePrint[t->type];

	string returntypess[8] = {"_",
						"void",
						"char",
						"integer",
						"float",
						"ptr("+ print_type(t->ptr)+")",
						"arr(" + str + ", "+ print_type (t->ptr) + ")",
						"function"};
	if (swt<1 || swt>7)
		return returntypess[0];
	return returntypess[swt];

}
