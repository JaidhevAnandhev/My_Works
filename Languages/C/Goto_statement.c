#include<stdio.h>
int main()
{
	int a, b, sum;
	printf("Enter two numbers: ");
	scanf("%d%d", &a, &b);
	sum = a+b;
	if(sum % 2 == 0)
		goto even;
	else
		goto odd;
	
	even:
		printf("Sum is %d and it is a even number.", sum);
	odd:
		printf("Sum is %d and it is Odd number.", sum);
	return 0;
}
