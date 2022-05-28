#include<stdio.h>
#include<conio.h>
/*Declaring a variable with value outside the function*/
int i = 5;
void main()
{
	printf("%d\n",i);
	increment();
	increment();
}
increment()
{
	i++;
	printf("%d\n",i);
}
