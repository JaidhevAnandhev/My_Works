/* Function with argument and no return value */
#include<stdio.h>
void main()
{
	/* function declaration */
	void sum(int a, int b);
	int a = 5, b = 6;
	/* function call 1 */
	sum(a,b);
	
	int s = 20, t = 30;
	/* function call 2 */
	sum(s,t);
	
}
/* function definition */
void sum(int x, int y)
{
	int ans;
	ans = x + y;
	printf("\nThe sum is: %d", ans);
}
