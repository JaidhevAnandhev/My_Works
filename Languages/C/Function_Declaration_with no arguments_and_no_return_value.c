#include<stdio.h>
void main()
{
	void sum(); /*Function declaration*/
	sum();		/*Function call*/
}
void sum()
{
	int a, b, ans;
	printf("Enter values of a and b: \n");
	scanf("%d %d", &a, &b);
	ans = a + b;
	printf("Sum is = %d", ans);
}
