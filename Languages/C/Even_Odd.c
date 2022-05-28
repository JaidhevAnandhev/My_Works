#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);
	if(a %2 == 0)
		printf("\nThe given number is Even.");
	else
		printf("The given number is Odd.");
	return 0;
}
