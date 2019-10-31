#include "ass6_16CS10034_translator.h"
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

extern FILE *yyin;
extern vector<string> allstrings;

using namespace std;

int labelCount=0;							// Label count in asm file
map<int, int> labelMap;				// map from quad number to label number
ofstream out;								// asm file stream
vector <quad> array;						// quad array
string asmfilename="ass6_16CS10034_";		// asm file name
string inputfile="ass6_16CS10034_test";		// input file name

/**
For computing the corresponding record
**/
void computeActivationRecord(symTable* st) {
	int param = -20;
	int local = -24;
	for (list <sym>::iterator it = st->table.begin(); it!=st->table.end(); it++) {
		if (it->category =="param") {
			st->ar [it->name] = param;
			param +=it->size;			
		}
		else if (it->name=="return") continue;
		else {
			st->ar [it->name] = local;
			local -=it->size;
		}
	}
}



void genasm() {
	array = q.array;

	//To update the goto labels
	for (vector<quad>::iterator it = array.begin(); it!=array.end(); it++) {
	int i;
	if (it->op=="GOTOOP" || it->op=="LT" || it->op=="GT" || it->op=="LE" || it->op=="GE" || it->op=="EQOP" || it->op=="NEOP") {
		i = atoi(it->result.c_str());
		labelMap [i] = 1;
	}
	}
	int count = 0;
	for (map<int,int>::iterator it=labelMap.begin(); it!=labelMap.end(); ++it)
		it->second = count++;
	list<symTable*> tablelist;
	for (list <sym>::iterator it =globalsymbolTable->table.begin(); it!=globalsymbolTable->table.end(); it++) {
		if (it->nested!=NULL) tablelist.pb (it->nested);
	}
	for (list<symTable*>::iterator iterator = tablelist.begin(); 
		iterator != tablelist.end(); ++iterator) {
		computeActivationRecord(*iterator);
	}

	//asmfile
	ofstream asmfile;
	asmfile.open(asmfilename.c_str());

	asmfile << "\t.file	\"test.c\"\n";
	for (list <sym>::iterator it = table->table.begin(); it!=table->table.end(); it++) {
		if (it->category!="function") {
			if (it->type->type=="CHAR") { // Global char
				if (it->initial_value!="") {
					asmfile << "\t.globl\t" << it->name << "\n";
					asmfile << "\t.type\t" << it->name << ", @object\n";
					asmfile << "\t.size\t" << it->name << ", 1\n";
					asmfile << it->name <<":\n";
					asmfile << "\t.byte\t" << atoi( it->initial_value.c_str()) << "\n";
				}
				else {
					asmfile << "\t.comm\t" << it->name << ",1,1\n";
				}
			}
			if (it->type->type=="INTEGER") { // Global int
				if (it->initial_value!="") {
					asmfile << "\t.globl\t" << it->name << "\n";
					asmfile << "\t.data\n";
					asmfile << "\t.align 4\n";
					asmfile << "\t.type\t" << it->name << ", @object\n";
					asmfile << "\t.size\t" << it->name << ", 4\n";
					asmfile << it->name <<":\n";
					asmfile << "\t.long\t" << it->initial_value << "\n";
				}
				else {
					asmfile << "\t.comm\t" << it->name << ",4,4\n";
				}
			}
		}
	}
	if (allstrings.size()) {
		asmfile << "\t.section\t.rodata\n";
		for (vector<string>::iterator it = allstrings.begin(); it!=allstrings.end(); it++) {
			asmfile << ".LC" << it - allstrings.begin() << ":\n";
			asmfile << "\t.string\t" << *it << "\n";	
		}	
	}
	asmfile << "\t.text	\n";

	vector<string> params;
	map<string, int> theMap;
	for (vector<quad>::iterator it = array.begin(); it!=array.end(); it++) {
		if (labelMap.count(it - array.begin())) {
			asmfile << ".L" << (2*labelCount+labelMap.at(it - array.begin()) + 2 )<< ": " << endl;
		}

		string arg1 = it->arg1;
		string arg2 = it->arg2;
		string op = it->op;
		string s=arg2;
		string result = it->result;

		if(op=="PARAM"){
			params.pb(result);
		}
		else {
			asmfile << "\t";
			// Binary Operations
			if (op=="ADD") {
				bool flag=true;
				if(s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) flag=false ;
				else{
					char * p ;
					strtol(s.c_str(), &p, 10) ;
					if(*p == 0) flag=true ;
					else flag=false;
				}
				if (flag) {
					asmfile << "addl \t$" << atoi(arg2.c_str()) << ", " << table->ar[arg1] << "(%rbp)";
				}
				else {
					asmfile << "movl \t" << table->ar[arg1] << "(%rbp), " << "%eax" << endl;
					asmfile << "\tmovl \t" << table->ar[arg2] << "(%rbp), " << "%edx" << endl;
					asmfile << "\taddl \t%edx, %eax\n";
					asmfile << "\tmovl \t%eax, " << table->ar[result] << "(%rbp)";
				}
			}
			else if (op=="SUB") {
				asmfile << "movl \t" << table->ar[arg1] << "(%rbp), " << "%eax" << endl;
				asmfile << "\tmovl \t" << table->ar[arg2] << "(%rbp), " << "%edx" << endl;
				asmfile << "\tsubl \t%edx, %eax\n";
				asmfile << "\tmovl \t%eax, " << table->ar[result] << "(%rbp)";
			}
			else if (op=="MULT") {
				asmfile << "movl \t" << table->ar[arg1] << "(%rbp), " << "%eax" << endl;
				bool flag=true;
				if(s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) flag=false ;
				else{
					char * p ;
					strtol(s.c_str(), &p, 10) ;
					if(*p == 0) flag=true ;
					else flag=false;
				}
				if (flag) {
					asmfile << "\timull \t$" << atoi(arg2.c_str()) << ", " << "%eax" << endl;
					symTable* t = table;
					string val;
					for (list <sym>::iterator it = t->table.begin(); it!=t->table.end(); it++) {
						if(it->name==arg1) val=it->initial_value; 
					}
					theMap[result]=atoi(arg2.c_str())*atoi(val.c_str());
				}
				else asmfile << "\timull \t" << table->ar[arg2] << "(%rbp), " << "%eax" << endl;
				asmfile << "\tmovl \t%eax, " << table->ar[result] << "(%rbp)";			
			}
			else if(op=="DIVIDE") {
				asmfile << "movl \t" << table->ar[arg1] << "(%rbp), " << "%eax" << endl;
				asmfile << "\tcltd" << endl;
				asmfile << "\tidivl \t" << table->ar[arg2] << "(%rbp)" << endl;
				asmfile << "\tmovl \t%eax, " << table->ar[result] << "(%rbp)";		
			}

			// Bit Operators /* Ignored */
			else if (op=="MODOP")		asmfile << result << " = " << arg1 << " % " << arg2;
			else if (op=="XOR")			asmfile << result << " = " << arg1 << " ^ " << arg2;
			else if (op=="INOR")		asmfile << result << " = " << arg1 << " | " << arg2;
			else if (op=="BAND")		asmfile << result << " = " << arg1 << " & " << arg2;
			// Shift Operations /* Ignored */
			else if (op=="LEFTOP")		asmfile << result << " = " << arg1 << " << " << arg2;
			else if (op=="RIGHTOP")		asmfile << result << " = " << arg1 << " >> " << arg2;

			else if (op=="EQUAL")	{
				s=arg1;
				bool flag=true;
				if(s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) flag=false ;
				else{
					char * p ;
					strtol(s.c_str(), &p, 10) ;
					if(*p == 0) flag=true ;
					else flag=false;
				}
				switch(flag){
					case true:asmfile << "movl\t$" << atoi(arg1.c_str()) << ", " << "%eax" << endl;
							break;
					case false: asmfile << "movl\t" << table->ar[arg1] << "(%rbp), " << "%eax" << endl;
							break;		  
				}

				asmfile << "\tmovl \t%eax, " << table->ar[result] << "(%rbp)";
			}			
			else if (op=="EQUALSTR")	{
				asmfile << "movq \t$.LC" << arg1 << ", " << table->ar[result] << "(%rbp)";
			}
			else if (op=="EQUALCHAR")	{
				asmfile << "movb\t$" << atoi(arg1.c_str()) << ", " << table->ar[result] << "(%rbp)";
			}					
			// Relational Operations
			else if (op=="EQOP") {
				asmfile << "movl\t" << table->ar[arg1] << "(%rbp), %eax\n";
				asmfile << "\tcmpl\t" << table->ar[arg2] << "(%rbp), %eax\n";
				asmfile << "\tje .L" << (2*labelCount+labelMap.at(atoi( result.c_str() )) +2 );
			}
			else if (op=="NEOP") {
				asmfile << "movl\t" << table->ar[arg1] << "(%rbp), %eax\n";
				asmfile << "\tcmpl\t" << table->ar[arg2] << "(%rbp), %eax\n";
				asmfile << "\tjne .L" << (2*labelCount+labelMap.at(atoi( result.c_str() )) +2 );
			}
			else if (op=="LT") {
				asmfile << "movl\t" << table->ar[arg1] << "(%rbp), %eax\n";
				asmfile << "\tcmpl\t" << table->ar[arg2] << "(%rbp), %eax\n";
				asmfile << "\tjl .L" << (2*labelCount+labelMap.at(atoi( result.c_str() )) +2 );
			}
			else if (op=="GT") {
				asmfile << "movl\t" << table->ar[arg1] << "(%rbp), %eax\n";
				asmfile << "\tcmpl\t" << table->ar[arg2] << "(%rbp), %eax\n";
				asmfile << "\tjg .L" << (2*labelCount+labelMap.at(atoi( result.c_str() )) +2 );
			}
			else if (op=="GE") {
				asmfile << "movl\t" << table->ar[arg1] << "(%rbp), %eax\n";
				asmfile << "\tcmpl\t" << table->ar[arg2] << "(%rbp), %eax\n";
				asmfile << "\tjge .L" << (2*labelCount+labelMap.at(atoi( result.c_str() )) +2 );
			}
			else if (op=="LE") {
				asmfile << "movl\t" << table->ar[arg1] << "(%rbp), %eax\n";
				asmfile << "\tcmpl\t" << table->ar[arg2] << "(%rbp), %eax\n";
				asmfile << "\tjle .L" << (2*labelCount+labelMap.at(atoi( result.c_str() )) +2 );
			}
			else if (op=="GOTOOP") {
				asmfile << "jmp .L" << (2*labelCount+labelMap.at(atoi( result.c_str() )) +2 );
			}
			// Unary Operators
			else if (op=="ADDRESS") {
				asmfile << "leaq\t" << table->ar[arg1] << "(%rbp), %rax\n";
				asmfile << "\tmovq \t%rax, " <<  table->ar[result] << "(%rbp)";
			}
			else if (op=="PTRR") {
				asmfile << "movl\t" << table->ar[arg1] << "(%rbp), %eax\n";
				asmfile << "\tmovl\t(%eax),%eax\n";
				asmfile << "\tmovl \t%eax, " <<  table->ar[result] << "(%rbp)";	
			}
			else if (op=="PTRL") {
				asmfile << "movl\t" << table->ar[result] << "(%rbp), %eax\n";
				asmfile << "\tmovl\t" << table->ar[arg1] << "(%rbp), %edx\n";
				asmfile << "\tmovl\t%edx, (%eax)";
			} 			
			else if (op=="UMINUS") {
				asmfile << "negl\t" << table->ar[arg1] << "(%rbp)";
			}
			else if (op=="BNOT")		asmfile << result 	<< " = ~" << arg1;
			else if (op=="LNOT")			asmfile << result 	<< " = !" << arg1;
			else if (op=="ARRR") {
				int off=0;
				off=theMap[arg2]*(-1)+table->ar[arg1];
//				asmfile << "movq\t" << table->ar[arg2] << "(%rbp), "<<"%rax" << endl;
				asmfile << "movq\t" << off << "(%rbp), "<<"%rax" << endl;
				asmfile << "\tmovq \t%rax, " <<  table->ar[result] << "(%rbp)";
			}	 			
			else if (op=="ARRL") {
				int off=0;
				off=theMap[arg1]*(-1)+table->ar[result];
//				asmfile << "movq\t" << table->ar[arg1] << "(%rbp), "<<"%rax" << endl;
				asmfile << "movq\t" << table->ar[arg2] << "(%rbp), "<<"%rdx" << endl;
				asmfile << "\tmovq\t" << "%rdx, " << off << "(%rbp)";
			}	 
			else if (op=="RETURN") {
				if(result!="") asmfile << "movl\t" << table->ar[result] << "(%rbp), "<<"%eax";
				else asmfile << "nop";
			}
			else if (op=="PARAM") {
				params.pb(result);
			}
			else if (op=="CALL") {
				// Function Table
				symTable* t =globalsymbolTable->lookup(arg1)->nested;
				int i,j=0;	// index
				for (list <sym>::iterator it = t->table.begin(); it!=t->table.end(); it++) {
					i = distance ( t->table.begin(), it);
					if (it->category== "param") {
						switch(j){
							case 0 :
								asmfile << "movl \t" << table->ar[params[i]] << "(%rbp), " << "%eax" << endl;
								asmfile << "\tmovq \t" << table->ar[params[i]] << "(%rbp), " << "%rdi" << endl;
								//asmfile << "\tmovl \t%eax, " << (t->ar[it->name]-8 )<< "(%rsp)\n\t";
								j++;
								break;
							case 1: 
								asmfile << "movl \t" << table->ar[params[i]] << "(%rbp), " << "%eax" << endl;
								asmfile << "\tmovq \t" << table->ar[params[i]] << "(%rbp), " << "%rsi" << endl;
								//asmfile << "\tmovl \t%eax, " << (t->ar[it->name]-8 )<< "(%rsp)\n\t";
								j++;
								break;
							case 2: 
								asmfile << "movl \t" << table->ar[params[i]] << "(%rbp), " << "%eax" << endl;
								asmfile << "\tmovq \t" << table->ar[params[i]] << "(%rbp), " << "%rdx" << endl;
								//asmfile << "\tmovl \t%eax, " << (t->ar[it->name]-8 )<< "(%rsp)\n\t";
								j++;

								break;
							case 3: 
								asmfile << "movl \t" << table->ar[params[i]] << "(%rbp), " << "%eax" << endl;
								asmfile << "\tmovq \t" << table->ar[params[i]] << "(%rbp), " << "%rcx" << endl;
								//asmfile << "\tmovl \t%eax, " << (t->ar[it->name]-8 )<< "(%rsp)\n\t";
								j++;
								break;
							default: 
								asmfile << "\tmovq \t" << table->ar[params[i]] << "(%rbp), " << "%rdi" << endl;							
						}
					}
					else break;
				}
				params.clear();
				asmfile << "\tcall\t"<< arg1 << endl;
				asmfile << "\tmovl\t%eax, " << table->ar[result] << "(%rbp)";
			}
			else if (op=="FUNC") {
				asmfile <<".globl\t" << result << "\n";
				asmfile << "\t.type\t"	<< result << ", @function\n";
				asmfile << result << ": \n";
				asmfile << ".LFB" << labelCount <<":" << endl;
				asmfile << "\t.cfi_startproc" << endl;
				asmfile << "\tpushq \t%rbp" << endl;
				asmfile << "\t.cfi_def_cfa_offset 8" << endl;
				asmfile << "\t.cfi_offset 5, -8" << endl;
				asmfile << "\tmovq \t%rsp, %rbp" << endl;
				asmfile << "\t.cfi_def_cfa_register 5" << endl;
				table =globalsymbolTable->lookup(result)->nested;
				asmfile << "\tsubq\t$" << table->table.back().offset+24 << ", %rsp"<<endl;
				
				// Function Table
				symTable* t = table;
				int i=0;
				for (list <sym>::iterator it = t->table.begin(); it!=t->table.end(); it++) {
					if (it->category== "param") {

						switch(i){
							case 0:
								asmfile << "\tmovq\t%rdi, " << table->ar[it->name] << "(%rbp)";
								i++;
								break;
							case 1:
								asmfile << "\n\tmovq\t%rsi, " << table->ar[it->name] << "(%rbp)";
								i++;
								break;
							case 2:
								asmfile << "\n\tmovq\t%rdx, " << table->ar[it->name] << "(%rbp)";
								i++;
								break;
							case 3:
								asmfile << "\n\tmovq\t%rcx, " << table->ar[it->name] << "(%rbp)";
								i++;
								break;
							
						}
					}
					else break;
				}
			}		
			else if (op=="FUNCEND") {
				asmfile << "leave\n";
				asmfile << "\t.cfi_restore 5\n";
				asmfile << "\t.cfi_def_cfa 4, 4\n";
				asmfile << "\tret\n";
				asmfile << "\t.cfi_endproc" << endl;
				asmfile << ".LFE" << labelCount++ <<":" << endl;
				asmfile << "\t.size\t"<< result << ", .-" << result;
			}
			else asmfile << "op";
			asmfile << endl;
		}
	}
	asmfile << 	"\t.ident\t	\"Compiled by Mehul Kumar Nirala 16CS10034\"\n";
	asmfile << 	"\t.section\t.note.GNU-stack,\"\",@progbits\n";
	asmfile.close();
}

template<class T>
ostream& operator<<(ostream& os, const vector<T>& v)
{
	copy(v.begin(), v.end(), ostream_iterator<T>(os, " ")); 
	return os;
}

int main(int argc, char* argv[]) {
	inputfile=inputfile+string(argv[argc-1])+string(".c");
	asmfilename=asmfilename+string(argv[argc-1])+string(".s");
	globalsymbolTable = new symTable("Global");
	table =globalsymbolTable;
	yyin = fopen(inputfile.c_str(),"r"); 
	yyparse();
	globalsymbolTable->update();
	globalsymbolTable->print();
	q.print();
	genasm();
	return 0;
}