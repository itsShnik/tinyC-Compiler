
//test file to check functions and iterations and also some of the

//functions created in assignment 2

int prints(char *c);
int printi(int i);
int readi(int *eP);

int FibonacciIterative(int a){
  prints("function call took place sucessfully ");
  int f=1,f_1=0;
  int i=1,temp;
  while(i<a) {
    temp=f;
    f=f+f_1;
    f_1=temp;
    i=i+1;
  }
  prints("\nThe i-th fibonacci number is:");
  printi(f);
  prints("\n");
  return f;
}
int FibonacciRecursive(int n){
  if(n==1||n==2)return 1;
  return FibonacciRecursive(n-1)+FibonacciRecursive(n-2);
}
int main () {
  prints("Enter for i-th fibonacci number : ");
  int i,ep;
  i=readi(&ep);
  prints("i: ");
  printi(i);
  prints("\n");
  //prints("i-th fibonacci number is :");
  prints("Fibonacci Iterative");
  prints("\n");
  int j;
  j=FibonacciIterative(i);
  prints("successfully returned from the function call Iterative\n");

  return;
}