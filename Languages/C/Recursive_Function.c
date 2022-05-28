#include<stdio.h>
/* Function declaration */
int sum(int n);

int main()
{
	int n, result;
	/* Get the input from the user */
	printf("Enter a positive number: ");
	scanf("%d", &n);
	/* Function call */
	result = sum(n);
	printf("Sum is: %d", result);
	return 0;
}

/* Function definition */
/* recursive function works here */
int sum(int x)
{
	if(x != 0)
		return x + sum(x-1); /* sum function() calls itself */
	else
	 	return x;
}
