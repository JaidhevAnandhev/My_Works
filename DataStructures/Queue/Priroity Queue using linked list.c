/* Priority Queue using linked list */
#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	int priority;
	struct Node *link;
};
struct Node *head = NULL;
void push(int data, int p)
{
	struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
	temp->data = data;
	temp->priority = p;
	struct Node *q = head;
	
	if(head == NULL || head->priority > p){
		temp->link = head;
		head = temp;
	}
	else
	{
		while(q->link != NULL && q->link->priority < p)
		{
			q = q->link;
		}
		temp->link = q->link;
		q->link = temp;
	}
}

void display()
{
	struct Node *ptr = head;
	if(head == NULL)
	{
		printf("Queue is Empty");
		exit(1);
	}
	else
	{
		while(ptr != NULL)
		{
			printf("Data = %d  and  Priority = %d\n", ptr->data, ptr->priority);
			ptr = ptr->link;
		}
	}
		
}

int main()
{
	push(45, 0);
	push(50, 2);
//	push(55, 1);
	display();
	return 0;
}