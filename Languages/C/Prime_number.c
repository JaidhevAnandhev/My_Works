#include<stdio.h>
#include<stdbool.h>  
int main()
{
	int n, i = 0;
	printf("Enter a number to check whether it is Prime or not: ");
	scanf("%d", &n);
	bool isNotPrime = false;
	/* Assumption : Given number will be divisible by 1 and itself. So need to check with other nos b\w 1 and itself */
	for(i = 2; i <= n-1; i++)
	{
		if(n % i == 0)
		{
			isNotPrime = true;
			break;
		}
	}
	if(isNotPrime)
		printf("The given number %d is not a prime number.", n);
	else
		printf("The given number %d is  a prime number.", n);
		
	return 0;
}
