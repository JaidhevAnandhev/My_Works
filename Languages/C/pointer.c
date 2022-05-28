#include<stdio.h>
int main()
{
	int *ptr, n, a;
	printf("Enter a number: ");
	scanf("%d", &n);
	ptr = &n;
	printf("Address of n = %d\n", ptr);
	*ptr = &n;
	printf("Address of ptr = %d\n", ptr);
	*ptr = 10;
	printf("Value of n = %d", n);
	return 0;
}
