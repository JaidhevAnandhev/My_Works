/* Passing array to a function element by element */
#include<stdio.h>
/* Function definition */
void input(int num)
{
	printf("\n Element = %d", num);
}
int main()
{
	int array[5], i;
	printf("Enter the array elements: \n");
	for(i = 0; i<5; i++)
		scanf("%d", &array[i]);
	printf("Passing the array element by element: \n");
	for(i = 0; i<5; i++)  /* Function call */
		input(array[i]);
	return 0;
	
}
