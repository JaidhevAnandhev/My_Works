#include<stdio.h>
int main()
{
	/* Declaring the variables and it's Types*/
	int distance = 100;
	float power = 2.345;
	double super_power = 234.567;
	char initial = 'A';
	char first_name[] = "Jaidhev";
	char last_name[] = "Anandhev";
	
	/*Display the values in the output*/
	/* 
		%d to display the integer.
		%f to display float and double values
		%.f to round a value -> 120.000000 to 120
		%c to print character
		%s to print a string
	*/
	printf("Distance = %d \n", distance);
	printf("Power = %f \n", power);
	printf("Super Power = %f \n", super_power);
	printf("Initial = %c. \n", initial);
	printf("First Name : %s. \n", first_name);
	printf("Last Name : %s. \n", last_name);
	printf("Whole Name is : %c. %s %s \n", initial, first_name, last_name);
	
	int bugs = 100;
	double bug_rate = 1.2;
	
	double expected_bugs = bugs * bug_rate;
	printf("Expected Bugs = %.f \n", expected_bugs);
	
	float unv_val = expected_bugs / bugs;
	printf("UNV_VAL = %.f \n", unv_val);
	
	char null = '\0';
	int care = 
	
	return 0;
}
