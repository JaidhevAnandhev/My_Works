#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number: \n");
	scanf("%d", &a);
	if(a == 5)
	{
		printf("You have printed the number %d", a);
	}
	else
	{
		printf("Please enter a valid number.");
	}
	return 0;
}
