/* Dequeue using circular array */

#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int arr[MAX];
int front = -1, rear = -1;

void front_end(int data)
{
	if(front == -1)
	{
		printf("Stack is empty. First element\n");
		front = 0;
		printf("Index = %d", front);
	}
	else if(front == 0)
	{
		printf("Element inserted behind the 0th index\n");
		front = MAX - 1;
	}
	else
	{
		front--;
		printf("Index is decrenmented so as to add the elements from front end\n");
	}
	arr[front] = data;
}

int main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);
	front_end(num);
}