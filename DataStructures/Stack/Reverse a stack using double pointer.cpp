#include<stdio.h>
#include<stdlib.h>
 
struct Node{
	int data;
	struct Node *link;
}*top = NULL;

void push(int data, struct Node **top)
{
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = data;
	temp->link = NULL;
	temp->link = *top;
	*top = temp;
	
}

int pop(struct Node **top)
{
	int val;
	struct Node *temp;
	temp = *top;
	val = temp->data;
	*top = (*top)->link;
	free(temp);
	temp = NULL;
	return val;
}

void reverse_stack(struct Node **top)
{
	struct Node *top1 = NULL;
	struct Node *top2 = NULL;
	while(*top != NULL)
	{
		push(pop(top), &top1);
	}
	while(top1 != NULL)
	{
		push(pop(&top1), &top2);
	}
	while(top2 != NULL)
	{
		push(pop(&top2), top);
	}
}

void print(struct Node **top)
{
	struct Node *ptr = *top;
	while(ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->link;
	}
}



int main()
{	
	int data;
	push(45, &top);
	push(56, &top);
	push(67, &top);
	printf("Original Stack = ");
	print(&top);        
	printf("\n");
	printf("Reverse Stack = ");
	reverse_stack(&top);
	print(&top);   
	return 0;
}