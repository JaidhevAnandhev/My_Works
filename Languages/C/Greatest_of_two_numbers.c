#include<stdio.h>
int main()
{
	int a, b, result;
	printf("Enter the number 1: ");
	scanf("%d", &a);
	printf("Enter the number 2: ");
	scanf("%d", &b);
	/*To check whether a given number is greater than other number using conditional operator*/
	result = (a>b)?a:b;
	printf("\nGreater number is: %d", result);
	
	/*To check whether a given number is greater than other number using if else*/
	if(a>b)
	{
		printf("\n%d is the greatest number.", a);
	}
	else
	{
		printf("\n%d is the greatest number.", b);
	}
	return 0;
}
