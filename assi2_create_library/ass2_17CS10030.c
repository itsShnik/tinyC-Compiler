#define BUFF 20
#include "myl.h"

// Function to output the given string on the terminal
int printStr(char *string){
	int char_count = 0; //initialize the character count
	
	//now count the number of characters in the string to allocate the memory accordingly
	for(;string[char_count] != '\0'; char_count++);

	//now use the assembly function to write on terminal
	__asm__ __volatile__ (
		"movl $1, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(string), "d"(char_count) // number of bytes = 1 * char_count
	) ; // $4: write, $1: on stdin (terminal)
	
	return char_count; // return the number of the characters
}

//function to read an integer from the stdin (terminal)
int readInt(int *n){
	//declaring the variables
	char buff[100];				//buffer array to read the input from stdin
	int numOfChars, i, num, flag = 0; // number of chars

	__asm__ __volatile__(
		"syscall"
		: "=a" (numOfChars)
		: "0" (0), "D" (0), "S" (buff), "d" (sizeof(buff))
		: "rcx", "r11", "memory", "cc"
	);

	//last char is '\0'
	buff[--numOfChars] = 0x0;
	i = numOfChars - 1;

	//remove the trailing whitespaces
	while(i >= 0 && buff[i--]==' ');

	//set the end of the string index
	buff[i + 2] = 0x0;
	numOfChars = i + 2;

	//remove the leading whitespaces
	i = -1;
	while(buff[++i] == ' ');

	//check if the number is negative
	if(buff[i] == '-'){
		i++;
		flag = 1;
	}

	if(buff[i] >= '0' && buff[i] <= '9'){
		num = buff[i] - '0';
		i++;
	}else{
		return ERR;
	}

	//convert to int from string
	for(; i < numOfChars; i++){
		if(!(buff[i] >= '0' && buff[i] <= '9')){
			return ERR;	
		}
		num = num * 10 + (buff[i] - '0');
	}
	if(flag){
		num = - num;
	}
	*n = num;
	return OK;

}

// the function to print an integer
int printInt(int n) {
	char buff[BUFF], zero='0';
	int i=0, j, k, bytes;
	if(n == 0)
	   	buff[i++]=zero;
	else{
		if(n < 0) {
			buff[i++]='-';
			n = -n;
		}
		while(n){
			int dig = n%10;
			buff[i++] = (char)(zero+dig);
			n /= 10;
		}
		if(buff[0] == '-')
		   	j = 1;
		else 
			j = 0;
		k=i-1;
		while(j<k){
			char temp=buff[j];
			buff[j++] = buff[k];
			buff[k--] = temp;
		}
	}
	
	//buff[i]='\n';
	bytes = i;
	
	__asm__ __volatile__ (
		"movl $1, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(buff), "d"(bytes)
	) ; // $4: write, $1: on stdin
	
	//check if the number of bytes (1 per char) is not zero to confirm that no error occurred in the program
	if(bytes >=1){
		return bytes;
	}else{
		return ERR;
	}
}

//function to read float from the terminal

int readFlt(float *f){
	int numOfChars; // number of characters in the input
	char buff[100]; // character array to scan the input
	
	//this function takes input from stdin as a string and the string is stored in buff
	__asm__ __volatile__(
		"syscall"
		: "=a" (numOfChars)
		: "0" (0), "D" (0), "S" (buff), "d" (sizeof(buff))
		: "rcx", "r11", "memory", "cc"
	);

	numOfChars --;
	buff[numOfChars] = 0x0; // last character in the string is null char
	int i = numOfChars - 1;

	//remove the trailing whitespaces
	while(i >= 0 && buff[i] == ' '){
		i --;
	}
	buff[i + 1] = 0x0;
	numOfChars = i + 1; //not counting the last null character

	//remove the leading whitespaces
	i = 0;
	while(i < numOfChars && buff[i] == ' '){
		i++;
	}

	//now we are left with a float number as a string starting at index 'i' and ending at index 'numOfChars - 1'
	int integer_part = 0, negative_flag = 0, dot_flag = 0;
	float dec_part = 0.0, ans = 0.0, mult_fac = 0.1;

	while(i < numOfChars){
		if(buff[i] == '-'){
			negative_flag = -1;
			i++;
			continue;
		}else if(dot_flag == 0 && buff[i] >= '0' && buff[i] <= '9'){
			integer_part = integer_part * 10 + (buff[i] - '0');
			i++;
		}else if(dot_flag == 1 && buff[i] >= '0' && buff[i] <= '9'){
			dec_part = dec_part + mult_fac * (buff[i] - '0');
			mult_fac *= 0.1;
			i++;
		}else if(dot_flag == 0 && buff[i] == '.'){
			dot_flag = 1;
			i++;
		}else{
			return ERR;
		}
	}

	ans = integer_part + dec_part;
	if(negative_flag){
		ans *= -1;
	}
	
	*f = ans;
	return OK;
	
		
}

//function to print the floating point number
int printFlt(float f){
	int len = 0;
	//check if it is a negative number
	if(f < 0){
		printStr("-");
		f *= -1;
		len++;
	}

	int integer_part = (int)f;
	float dec_part = f - integer_part;

	//print the integer part first
	len += printInt(integer_part);
	
	//print the decimal
	len++;
	printStr(".");
	
	//print the fractional part
	for(int i = 0; i < 6; i ++){
		dec_part *= 10;
		if(!printInt((int)dec_part)){
			return ERR;
		}
		dec_part -= (int)dec_part;
		len++;
	}

	return len;
}
