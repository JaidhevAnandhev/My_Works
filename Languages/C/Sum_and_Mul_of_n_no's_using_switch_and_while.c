#include<stdio.h>
int main()
{
	int i = 1, n, sum = 0, mul = 1, choice;
	/*Program to print sum and multiplication of n numbers using while and switch*/
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("1. Addition\n");
	printf("2. Multiplication\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			while(i<=n)
			{
				sum = sum + i;
				i++;
			}
			printf("The sum of %d numbers are: %d", n, sum);	
			break;
		case 2:
			while(i<=n)
			{
				mul  = mul * i;
				i++;
			}
			printf("The multiplication of %d numbers are: %d", n, mul);
			break;
	}
	return 0;
}
