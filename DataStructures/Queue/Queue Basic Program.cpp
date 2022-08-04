#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *link;
};

struct Queue{
	struct Node *front, *rear;
};

struct Node* newNode(int data)
{
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = data;
	temp->link = NULL;
	return temp;
}

struct Queue* newQueue()
{
	struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
	q->front = NULL;
	q->rear = NULL;
	return q;
}

void Enqueue(struct Queue *q, int data)
{
	struct Node *temp = newNode(data);
	if(q->rear == NULL)
	{
		q->front = q->rear = temp;
	}
	q->rear->link = temp;
	q->rear = temp;
}

void Dequeue(struct Queue *q)
{
	struct Node *temp = q->front;
	if(q->front == NULL)
		printf("Queue is empty coder.");
	else if(q->front == q->rear)
	{
		q->front = q->rear = NULL;
		printf("Now your Queue is NULL");
	}
	else
	{
		q->front = q->front->link;	
	}
	free(temp);
	temp = NULL;
}
int main()
{
	struct Queue *q = newQueue();
	Enqueue(q, 45);
	Enqueue(q, 50);
	Enqueue(q, 55);
	Dequeue(q);
	printf("Queue Front = %d\n", q->front->data);
	printf("Queue Rear = %d", q->rear->data);
	return 0;
}