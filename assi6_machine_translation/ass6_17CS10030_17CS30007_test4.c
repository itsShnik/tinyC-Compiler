int prints(char *c);
int printi(int i);

int inc(int a,int b){
	prints("\n\nEntered inside the function body \n");
	b=b+7+a;
	prints("returning value: ");
	printi(b);
	return b;
}

int main() {
	int i,j=7;
	i=1;
	prints("+++++++++  Entering the function inc   +++++++ \n");
	j=inc(i,j);
	prints("\n\n+++++++++   The value returned is   +++++++++ \n");
	printi(j);
	prints("\n");
	return 0;
}
