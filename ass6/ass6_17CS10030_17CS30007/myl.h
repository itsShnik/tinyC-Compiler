#ifndef _MYL_H
#define _MYL_H
#define ERR 1
#define OK 0
int prints(char *);
int printi(int);
// *eP is for error, if the input is not an integer		
int readi(int *eP);	
// return value is error or OK					
int readf(float *);		
int printd(float);
#endif