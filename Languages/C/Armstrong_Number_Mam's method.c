#include<stdio.h>
void main()
{
	int n, r, sum = 0;
	printf("Enter a number: ");
	scanf("%d", &n);
	int temp = n;
	while(n>0)
	{
		r= n % 10;
		sum = sum + (r*r*r);
		n = n / 10;
	}
	if(temp == sum)
	{
		printf("The given number is an armstrong number");
	}
	else
	{
		printf("The given number is not an armstrong number");
	}
}
