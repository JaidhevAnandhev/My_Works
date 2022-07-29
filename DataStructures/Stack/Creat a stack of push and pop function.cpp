/* Stack programs */
#include<stdio.h>
#include<stdlib.h>
#define MAX 5

/* Declaring a variable that can be glob	ally accessed */
int stack_arr[MAX];
int top = -1;

/* Check whether the stack is full or not */
int isFull()
{
	if(top == MAX - 1){
		printf("Stack overflow");
		return 1;
	}
	else 
		return 0;	
}


/* Check whether the stack is empty or full */
int isEmpty()
{
	if(top == -1){
		printf("Stack is empty try adding some elements");
		exit(1);
	}
	else	
		return 0;
}

/* Creating push function */
void push(int data)
{
	if(isFull())
		exit(1);
	else{
		top = top + 1;
		stack_arr[top] = data;
	}
		
}

/* Creatig a pop function */
int pop()
{
	if(isEmpty())
		return 0;
	int value;
	value = stack_arr[top];
	top = top - 1;
	return value;
}


/* Gives the peak value of the stack */
int peak()
{
	if(isEmpty())
		return 0;
	printf("Top most element is = %d\n",stack_arr[top]);
	return 0;
}


/* Printing the data of stack */
void print()
{
	int i;
	if(isEmpty())
		return ;
	//for(i = top; i >=0; i--)
	//	printf("%d  ", stack_arr[i]);
	while(top != -1)
		printf("%d ", pop());
}


/* Driver code */
int main()
{
	int data;
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	data = peak();
	data = pop();
	print();
	return 0;
}
