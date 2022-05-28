#include<stdio.h>

/*Declaration of Global Variable*/
int sum;
void main()
{
	/* Welcome to C */
	/* Hello everyone, This is a multilne comment*/
	
	/*Declaration of local variable*/
	int n1, n2;
	printf("Enter a number: ");
	scanf("%d %d", &n1, &n2);
	
	/*Calling Global Variable sum*/
	sum = n1 + n2;  /*Performing addtion (Documenting)*/
	printf("The sum is: %d", sum);
	return 0;

}


