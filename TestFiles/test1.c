//sample code to test if a student passes or not
//it checks function , declarations, and few conditions


int count_passes(int grades, int elements,int value);
void print_arr(int grades, int elements)
{
	printf("%d ",grades);
	printf("\n");
}


int main()
{
	int grades=10;
	int result;
	print_arr(grades,10);
	result = count_passes(grades,10,70);
	
	if(result == 1)
		printf("There was %d pass.\n",result);
	else
		printf("There were %d passes.\n",result);

	return 0;
}

int count_passes(int grades, int elements,int value)
{
	int i ,passes = 0 ;

	if(grades>= value)
		passes++;
	
	return(passes);
}
