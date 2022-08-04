/* Circular Queue using arrays */
#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int front = -1, rear = -1;
int Cir_queue[MAX];

void EnQueue(int data)
{
	if(front == 0 && rear == MAX-1)
	{
		printf("Queue overflow");
		exit(1);
	}
	else if(front == -1)
	{
		front = rear = 0;
	}
	else if(rear == MAX-1 && front != 0)
	{
		rear = 0;
	}
	else
	{
		rear++;
	}
	Cir_queue[rear] = data;	
}

int DeQueue()
{
	if(front == rear)
	{
		front = rear = -1;	
	}
	else if(front == MAX-1)
	{
		front = (front + 1) % MAX;	
	}	
	else
		front++;
	int data = Cir_queue[front];
	return data;
}

void display()
{
	int i = 0, j = 0;
	if(front == -1 && rear == -1)
		printf("Queue is Empty. Try adding some elements\n");
	else if(front > rear)
	{	
		for(i = front; i < MAX; i++)
			printf("%d ", Cir_queue[i]);
		for(j = 0; j<=rear; j++)
			printf("%d ", Cir_queue[j]);
	}
	else
	{
		for(i = front; i<=rear; i++)
		 printf("%d ", Cir_queue[i]);
	}
}

int main()
{			
	EnQueue(1);
	EnQueue(2);
	EnQueue(3);
	EnQueue(4);
	DeQueue();
	DeQueue();
	EnQueue(5);
	EnQueue(6);
	display();
	return 0;
}
 