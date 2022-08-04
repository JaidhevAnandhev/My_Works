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
		front = 0;
		rear = 0;
	}
	else if(front == 0)
	{
		front = MAX - 1;
	}
	else
	{
		front--;
	}
	arr[front] = data;
}

void rear_end(int data)
{
	if(rear == -1)
	{
		rear = 0;
		front = 0;
	}
	else if(rear == MAX-1)
	{
		rear = 0;
	}
	else
		rear++;
	arr[rear] = data;
}

int del_first()
{

	if(front == -1)
	{
		printf("Queue is already empty");
		return -1;
	}
	else if(front == 0)
	{
		front = -1;
		printf("Front end is deleted.\n");
	}
	else
	{
		front++;
	}
	return arr[front];
}


void display()
{
	int i;
	if(front == -1 && rear == -1)
	{
		printf("Queue is Empty");
	}
	else if(front <= rear)
	{
		for(i=front ; i<=rear; i++)
			printf("%d ", arr[i]);
	}
	else if(front > rear)
	{
		for(i=front; i<= MAX-1; i++)
			printf("%d ", arr[i]);
		for(i = 0; i<=rear; i++)
			printf("%d ", arr[i]);
	}
}

int main()
{
	front_end(100);
	front_end(50);
	del_first();
	rear_end(150);
	display();
}

