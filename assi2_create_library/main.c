#include <stdlib.h>
#include <stdio.h>
#include "myl.h"

int main(){
	//Testing the function printStr
	char string[100];
	printf("Enter a string\n");
	scanf("%[^\n]%*c", string);
	fflush(stdin);
	printf("[printStr]							[printf] \n");	
	printStr(string);
	printf("							%s\n", string);
	printf("\n");

	//Testing the function printInt and readInt
	int n;
	printf("Enter an integer [readInt]:\n");
	//scanf("%d", &n);
	readInt(&n);
	printf("[printInt]							[printf] : \n");
	printInt(n);
	printf("								%d\n", n);
	fflush(stdin);

	//Testing the function readFlt
	float f;
	printf("Enter a floating point number [readFlt]:\n");
	readFlt(&f);
	printf("[printFlt]							[printf] : \n");
	printFlt(f);
	printf("							%f\n", f);

	return 0;
}
