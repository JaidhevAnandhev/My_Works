#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter num 1: ");
	scanf("%d", &a);
	printf("Enter num 2: ");
	scanf("%d", &b);
	if(a==b)
		printf("\nBoth the numbers are equal.");
	else if(a!=b)
		printf("\nBoth the numbers are not equal.");
	else
		printf("Enter a valid number.");
	return 0;
}
