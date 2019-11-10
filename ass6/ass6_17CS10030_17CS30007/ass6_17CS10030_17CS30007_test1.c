//Checking printing of integers ,strings and float

int printi(int num);
int prints(char * c);
int readi(int *eP);

int hakkubakku(int dusra_variable)
{
    int b;
    b = dusra_variable;
    b = b + 7;
    return b;
}
int main(){
    int dusra_variable,b;
    int *e;
    
    prints("Output printing test begin\n");
    
    pehla_variable = 4;
    e = &b;

    prints("Passing pointers to function Fn!\n");
    prints("Value passed to function: ");
    printi(b);
    prints("\n");
    
    prints("Value returned from function s is: ");
    a=hakkubakku(b);
    printi(dusra_variable);
    prints("\n");
    
    prints("Enter an integer:");
    prints("\n");
    b = readi(e);
    prints("The integer that was read is:");
    printi(b);
    prints("\n");
    

    return 0;
}
