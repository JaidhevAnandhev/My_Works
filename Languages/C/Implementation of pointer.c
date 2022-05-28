#include<stdio.h>
void  main()
{
	int *pc, c;
	c = 22;
	printf("Address of c = %d\n", &c);
	pc = &c;
	printf("Address of pc = %d\n", pc);
	printf("Value of pc = %d\n", *pc);
	c = 11;
	printf("Address of pointer pc = %d\n", pc);
	printf("Value of pointer pc = %d\n", *pc);
	*pc = 2;
	printf("\nValue of *pc = %d", c);
}
