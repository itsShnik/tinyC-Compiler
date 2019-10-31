
//test file to check basic statements, expression, readi and printi library 

//functions created in assignment 2

//also checks the recursive fibonacci function to check the function call and return methodology


int prints(char *c);
int printi(int i);
int readi(int *eP);

int fibonacci(int n){
  if(n==1||n==2)return 1;
  int d=fibonacci(n-1);
  int c=fibonacci(n-2);
  int e=d+c;
  return e;
}

int main(){
  int n;
  prints("Enter a small number :");
  readi(&n);
  a = fibonacci(n);
  return ;
}