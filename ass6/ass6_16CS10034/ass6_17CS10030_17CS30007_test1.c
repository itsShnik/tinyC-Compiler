//Checking printing of integers ,strings and float

int printi(int num);
int prints(char * c);
int readi(int *eP);

int Function(int a)
{
    int b;
    b = a;
    b = b + 7;
    return b;
}
int main(){
    int a,b;
    int *e;
    
    prints("Output printing test begin\n");
    
    b = 4;
    e = &b;

    prints("Passing pointers to function Fn!\n");
    prints("Value passed to function: ");
    printi(b);
    prints("\n");
    
    prints("Value returned from function s is: ");
    a=Function(b);
    printi(a);
    prints("\n");
    
    prints("Enter an integer:");
    prints("\n");
    b = readi(e);
    prints("The integer that was read is:");
    printi(b);
    prints("\n");
    

    return 0;
}
