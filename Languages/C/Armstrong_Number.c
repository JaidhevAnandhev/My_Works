#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, i = 0, total = 0;
	printf("Enter a number with more than one character: ");
	scanf("%d", &n);
	char n_t_c[BUFSIZ];
	snprintf(n_t_c, sizeof(n_t_c), "%d", n);
	for(i = 0; i<strlen(n_t_c); i++)
	{
		int c_t_n = ((int)(n_t_c[i])) - 48;
		total = total + (c_t_n * c_t_n * c_t_n);
	}
	
	/* Compare the value of total with the given number */
	if(n == total)
		printf("\nThe given number %d is an armstrong number", n);
	else
		printf("\nThe given number %d is not an armstrong number", n);
		
	return 0;
}
