#include<stdio.h>
void main()
{
	int a, b, result;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("Enter the value of b: ");
	scanf("%d", &b);
	result = (a>b)?a:b;
	printf("Result of greater number is: %d", result);
	
}
