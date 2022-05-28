#include<stdio.h>
void swap(int *x, int *y);/* Function definition*/
int main()
{
	int a = 100, b = 200;
	printf("Before swap the value of a is: %d \n", a);
	printf("Before swap the value of b is: %d \n", b);
	/* fuction call */
	swap(&a, &b);
	printf("After swap the value of a is: %d \n", a);
	printf("Before swap the value of b is: %d \n", b);
	return 0;
}
/* Function definition */
void swap(int *x, int *y) /*Formal argument */
{
	int a;
	a = *x;
	*x = *y;
	*y = a;
}

