#include<stdio.h>
void main()
{
	void sum(int, int);
	int a = 5, b = 6;
	sum(a, b);
}
void sum(int x, int y)
{
	int ans;
	ans = x + y;
	printf("The sum is: %d", ans);
}
