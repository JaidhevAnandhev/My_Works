/* 3. Functiom with return type and no arguments */
#include<stdio.h>
/* Function declaration*/
int mul();
int main()
{
	int multi;
	multi = mul();/* function call */
	printf("Product is: %d", multi);
	return 0;
}
/* function definition */
int mul()
{
	int a = 10, b = 10, ans;
	ans = a * b;
	return ans;
}
