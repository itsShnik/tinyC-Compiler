
//Expression evaluation test

int prints(char *c);
int printi(int i);
int readi(int *eP);

//Global constants
int a;
int b = 5;
char c;
char d = 'a';

int add (int a, int b) {
  int ans;
  int c = 8, d, arr[10];
  int*p;
  prints("enterned to the function body\n");
  ans = a+b;
  d = 8;
  //checking of if conditions
  if (a>=d) {
    a++;
  }
  else {
    c = a+b;
  }
  prints("returning from function body\n");
  return ans;
}
int main () {

  //Initializations check
  int c = 8, d, arr[10];
  int*p;
  int x, y, z;
  int eP;
  prints("enter two numbers :\n");
  x = readi(&eP);
  y = readi(&eP);

  //Function call check
  z = add(x,y);
  prints("sum is equal to ");
  printi(z);
  prints("\n");
  return c;
}
