/* Implementation of double pointer in stacks */
#include<stdio.h>
#include<stdlib.h>

/* Function to change the value of pointer */
void change_ptr(int **ptr)
{
	int val2= 68;
	*ptr = &val2;
}
int main()
{
	int *ptr;
	int val = 45;
	change_ptr(&ptr);
	printf("Value of pointer = %d", *ptr);
	
}


