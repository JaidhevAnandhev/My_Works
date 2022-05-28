/* 4. Functiom with return type and with arguments */
#include<stdio.h>
/* Function declaration*/
int div(int a, int b);

int main()
{
	int a, b, division;
	a = 4, b = 2;
	division = div(a, b);/* function call */
	printf("The answer is: %d", division);
	return 0;
}
/* function definition */
int div(int x, int y)
{
	int ans;
	ans = x / y;
	return ans;
}
