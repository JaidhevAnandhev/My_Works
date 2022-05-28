/*Program to print sum of n numbers limit is upto 10 numbers*/
#include<stdio.h>
void main()
{
	int a[10], i, n, sum;
	/*Getting the size of the array*/
	printf("Size of the array: ");
	scanf("%d", &n);
	
	/*Giving the input */
	printf("Enter the elements: \n\a");
	for(i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	/*You must initialize sum as zero*/
	sum = 0;
	
	/*Code for printing sum of n numbers*/
	for(i = 0; i<n; i++)
	{
		sum += a[i];
	}
	
	/*Display the output*/
	printf("Sum of n numbers are: %d", sum);
	
	getch();
}
