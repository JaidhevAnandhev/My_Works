#include<stdio.h>
int main()
{
	int n, i = 0;
	printf("Enter a number to display it's multiples upto 10: ");
	scanf("%d", &n);
	printf("\nMultiples of %d is as below \n", n);
	for(i = 1; i<=10; i++)
		printf("%d X %d = %d \n", n, i, (n*i));
	
	return 0;
}
