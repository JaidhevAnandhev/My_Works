#include<stdio.h>
#include<conio.h>
increment();
void main()
{
	increment();
	increment();
	increment();
	increment();
}
increment()
{
	static int i = 1;
	printf("%d\n", i);
	i++;
	getch();
}

