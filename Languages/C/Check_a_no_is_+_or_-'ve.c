#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);
	if(a>0)
		printf("\nThe given number is positive.");
	else if(a<0)
		printf("The given number is negative.\n");
	else
		printf("Please enter a valid number.");
	return 0;
}
