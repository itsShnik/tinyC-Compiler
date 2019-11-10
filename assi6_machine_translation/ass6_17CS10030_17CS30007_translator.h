#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#ifndef TRANSLATE
#define TRANSLATE
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

/*Defining the possible custom size types
*/
#define CHAR_SIZE 		    1
#define INT_SIZE  		    4
#define FLOAT_SIZE		    8
#define POINTER_SIZE		4

extern  char* yytext;
extern  int yyparse();

using namespace std;


//Declarations for each of the class to avoid conflicts
class sym_type;					// type information in the symbol-table
class quad;						// individual entry in quad array
class quadArray;				// quad array
class sym;						// each entry in symbol table
class symTable;					// The symbol table


//Declaration of global variables
extern symTable* table;						// Current symbbol Table
extern symTable* globalsymbolTable;				// Global symbbol Table
extern quadArray q;							// Array of quads
extern sym* currentsymbol;					// Pointer to just encountered symbol

/*symbol table constructor definitions
*/

class sym_type { // symbol type information
public:
	sym_type(string type, sym_type* ptr = NULL, int width = 1);
	string type;
	int width;					// for computing size of array
	sym_type* ptr;				// 2d arrays
};

class quad { // quad code from corresponding TAC
public:
	string op;					// Operator code
	string result;				// Result of the expression
	string arg1;				// arg1
	string arg2;				// arg2

	void print ();								// Print quad
	quad (string result, string arg1, string op = "EQUAL", string arg2 = "");			//constructors
	quad (string result, int arg1, string op = "EQUAL", string arg2 = "");				//overloading for int constructors
	quad (string result, float arg1, string op = "EQUAL", string arg2 = "");			//overloading for float constructors
};

class quadArray { // Array of quads
public:
	vector <quad> array;;		                // Vector of quads
	void print ();								// Print the quadArray
};

class sym { // symbols class
public:
	string name;				// Name of the symbol
	sym_type *type;				// Type of the symbol
	string initial_value;		// symbol initial valus (if any)
	string category;
	int size;					// Size of the symbol
	int offset;					// Offset of symbol
	symTable* nested;				// Pointer to nested symbol table

	sym (string name, string t="INTEGER", sym_type* ptr = NULL, int width = 0); //constructor declaration
	sym* update(sym_type * t); 	// A method to update different fields of an existing entry.
	sym* link_to_symbolTable(symTable* t);
};

class symTable { // symbol Table class
public:
	string name;				// Name of Table
	int count;					// Count of temporary variables
	list<sym> table; 			// The table of symbols
	symTable* parent;				// Immediate parent of the symbol table
	map<string,int> ar;
	symTable (string name="NULL");
	sym* lookup (string name);								// Lookup for a symbol in symbol table
	void print();					            			// Print the symbol table
	void update();						        			// Update offset of the complete symbol table
};



//Attributes for statements
struct statement {
	list<int> nextlist;				// Nextlist for statement
};

//Attributes for array
struct array {
	string cat;
	sym* loc;					// Temporary used for computing array address
	sym* array;					// Pointer to symbol table
	sym_type* type;				// type of the subarray generated
};


//Attributes for expressions
struct expr {
	string type; 							//to store whether the expression is of type int or bool

	// Valid for non-bool type
	sym* loc;								// Pointer to the symbol table entry

	// Valid for bool type
	list<int> truelist;						// Truelist valid for boolean
	list<int> falselist;					// Falselist valid for boolean expressions

	// Valid for statement expression
	list<int> nextlist;
};

/*Useful functions
*/
void emit(string op, string result, string arg1="", string arg2 = "");    //emits for adding quads to quadArray
void emit(string op, string result, int arg1, string arg2 = "");		  //emits for adding quads to quadArray (arg1 is int)
void emit(string op, string result, float arg1, string arg2 = "");        //emits for adding quads to quadArray (arg1 is float)


sym* conv (sym*, string);							// TAC for Type conversion in program
bool typecheck(sym* &s1, sym* &s2);					// Checks if two symbols have same type
bool typecheck(sym_type* t1, sym_type* t2);			//checks if two sym_type objects have same type


void backpatch (list <int> lst, int i);
list<int> makelist (int i);							        // Make a new list contaninig an integer
list<int> merge (list<int> &lst1, list <int> &lst2);		// Merge two lists into a single list

expr* int2bool (expr*);				// convert any expression (int) to bool
expr* bool2int (expr*);				// convert bool to expression (int)

void changeTable (symTable* newtable);               //for changing the current sybol table
int nextinstr();									// Returns the next instruction number

sym* gentemp (sym_type* t, string init = "");		// Generate a temporary variable and insert it in current symbol table

int size_type (sym_type*);							// Calculate size of any symbol type 
string print_type(sym_type*);						// For printing type of symbol recursive printing of type

#endif