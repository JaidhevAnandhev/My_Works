/* Passing the entire arrray */
#include<stdio.h>
/* Function declaration */
int square(int a[5]);

int main()
{
	int a[5], i, ans;
	/* Get the input from the user */
	printf("Enter a set of numbers:\n");
	for(i = 0; i<5; i++)
		scanf("%d", &a[i]);
	/* Function call */
	square(a);
	for(i = 0; i<5; i++)
		printf("\nThe Square of %d is: %d", i+1, a[i]);
	return 0;
}

/* Function definition */
int square(int x[5])
{
	int i = 0;
	for(i = 0; i<5; i++)
		x[i] *= x[i];
}
