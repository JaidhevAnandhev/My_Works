#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, i = 0, total = 0;
	printf("Enter a number wih more than 1 character: ");
	scanf("%d", &n);
	char num_to_carr[BUFSIZ];
	snprintf(num_to_carr, sizeof(num_to_carr), "%d", n);
	printf("Number to character array: %s \n", num_to_carr);

		
	for(i = 0; i<strlen(num_to_carr); i++)
	{
		/* Explicit typecast of a character into array */		
		total = total + ((int)(num_to_carr[i]) - 48);
	}
	printf("\n Sum of %d digits = %d", n, total);
	return 0;
}
