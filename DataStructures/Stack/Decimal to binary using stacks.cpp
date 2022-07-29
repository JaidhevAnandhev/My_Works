#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int stack_arr[MAX];
int top = -1;

void push(int data)
{
	if(top == MAX - 1)
	{
		printf("Stack overflow");
		exit(1);
	}
	top = top + 1;
	stack_arr[top] = data;
}

int pop()
{
	int value;
	if(top == -1)
	{
		printf("Stack underflow");
		return 1;
	}
	value = stack_arr[top];
	top = top - 1;
	return value;
}

void print()
{
	if(top == -1)
		printf("Stack is empty");
	while(top != -1)
		printf("%d ", pop());
}

void binary(int num)
{
	while(num != 0)
	{
		push(num%2);
		num = num/2;	
	}
}
int main()
{
	int count, num,i;
	printf("Enter the count = ");
	scanf("%d", &count);
	for(i = 0; i<count; i++){
		printf("\nEnter a number = ");
		scanf("%d", &num);
		
		binary(num);
		printf("\nBinary equivalent of %d = ", num);
		print();
		printf("\n");
	}

	
}