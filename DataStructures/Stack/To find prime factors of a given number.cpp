/* Program to find the prime factorization of a given number */
#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int stack[MAX];
int top = -1;

void push(int data)
{
	if(top == MAX - 1){
		printf("Stack Overflow");
		exit(1);
	}	
	top = top + 1;
	stack[top] = data;
}

int pop()
{
	int value;
	if(top == -1){
			printf("Stack Underflow");
		    return 0;
	}
	value = stack[top];
	top = top - 1;
	return value;
}

void print()
{
	int i;
	if(top == -1)
		printf("Stack is empty");
//	for(i=top; i>=0;i--)
//		printf("%d ", stack[i]);
	while(top != -1)
		printf("%d ", pop());
}

void prime_fact(int num)
{
	int i;
	i = 2;
	while(num != 1)
	{
		while(num % i == 0)
		{
			push(i);
			num = num / i;
		}
		i++;
	}
	print();
}

int main()
{
	int data;
/*	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	printf("Top most element is = %d\n",stack[top]);
	print();
	printf("\n");
	data = pop();  */
	prime_fact(250);
	return 0;
}
