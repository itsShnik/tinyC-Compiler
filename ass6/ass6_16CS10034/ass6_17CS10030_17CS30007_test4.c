
//Random testing

int prints(char *c);
int printi(int i);

int hakku(int a,int b){
  prints("\n\nEntered the body of hakku\n");
  if (i > j) {
    prints("returning value: ");
    printi(a+3);
    return (a + 3);
  }
  prints("returning value: ");
  printi(b+3)
  return (b + 3);
}

int main() {
  int i,j=7;
  i=9;
  prints("Testing function hakku - returns max(a,b) + 3\n");
  j=hakku(i,j);
  prints("\n\n+++++++++   The value returned is   +++++++++ \n");
  printi(j);
  prints("\n");
  return 0;
}
