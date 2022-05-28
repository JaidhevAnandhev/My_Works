#include<stdio.h>
/* function declaration */
void swap(int x, int y);
int main()
{
	int a = 20;
	int b = 30;
	int ans;
	/* Before function call */
	printf("Before swap the value of a is: %d \n", a);
	printf("Before swap the value of b is: %d \n", b);
	/* function call */
	swap(a, b);
	printf("\nAfter swap the value of a is: %d \n", a);
	printf("After swap the value of b is: %d \n", b);
	
	return 0;
}
void swap(int x, int y)
{
	/* Swapping using the value */
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("\n X = %d, Y = %d", x, y);
	
}
