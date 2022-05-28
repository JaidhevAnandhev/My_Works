#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, i = 0;
	printf("Enter a number with more than one character: ");
	scanf("%d", &n);
	/*char num_to_carr[BUFSIZ];
	snprintf(num_to_carr, sizeof(num_to_carr), "%d", n);*/
	char num_to_carr[BUFSIZ];
	snprintf(num_to_carr, sizeof(num_to_carr), "%d", n);
	printf("Number to character array: %s \n", num_to_carr);
	
	printf("Length is: %d and given number is \n", strlen(num_to_carr));
	for(i = 0; i<strlen(num_to_carr); i++)
	{
		printf("%c", num_to_carr[i]);
	}
	
	printf("\nReverse the number given: ");
	for(i = strlen(num_to_carr)-1; i>=0; i--)
	{
		printf("%c", num_to_carr[i]);
	}
	return 0;	
}
