#include<stdio.h>
void main()
{
	int num, fact = 1, i = 0;
	printf("Num:");
	scanf("%d", &num);
	for(i = 1; i<=num; i++)
	{
		fact = fact * i;
	}
	printf("Factorial is: %d", fact);
}
