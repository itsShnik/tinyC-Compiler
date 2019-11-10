//test file to check basic statements, expression, readi and printi library 

//functions created in assignment 2

//also checks the recursive fibonacci function to check the function call and return methodology


int prints(char *c);
int printi(int i);
int readi(int *eP);

int fibonacci(int n){
  return n;
}

int main(){
  int n;
  int *e;
  e = &n;

  prints("Enter a small number :");
  readi(e);
  a = fibonacci(n);
  return 0;
}
