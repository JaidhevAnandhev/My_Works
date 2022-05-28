#include<stdio.h>
void main()
{
	int a[5] = {10, 20, 30, 40, 50};
	int i;
	for(i = 0; i<=sizeof(a[5]); i++)
	{
		printf("Number is :%d\n", a[i]);
	}
}
