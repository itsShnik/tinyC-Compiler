/**************************
 * Name:- Nikhil Shah     *
 * Roll No.:- 17CS10030   *
 * Assignment 4 : Parser  *
 **************************/


// Checks for all errors
// Try to make errors here and they will be detected
//here its an error (uncomment this line)

//here is a simple c program, it was my first program
int main () { 
	float principal_amt, rate, simple_interest;
	int time;
    
    printf("Enter the values of principal_amt, rate and time \n");
    scanf("%f %f %d", &principal_amt, &rate, &time);
    simple_interest = (principal_amt * rate * time) / 100.0;
    printf("Amount = Rs. %5.2f\n", principal_amt);
    printf("Rate = Rs. %5.2f%\n", rate);
    printf("Time = %d years\n", time);
    printf("Simple interest = %5.2f\n", simple_interest);

	//another C program
	
	return 0;	
}
