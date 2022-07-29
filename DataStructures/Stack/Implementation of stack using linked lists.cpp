/* Implementation of stacks using singly linked list*/
#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *link;
};//*top = NULL, *top2 = NULL; /*Global pointer is declared */


/* Function to add values to stack */
/* Similar to add_at_beg() function used in singly linked list */
struct Node* push(struct Node *top, int data)
{
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = data;
	temp->link = NULL;
	temp->link = top;
	top = temp;	
	return top;
}

struct Node* pop(struct Node *top) /* this top pointer is local to this function */
{
	struct Node *temp = NULL;
	temp = top;
	top = top->link; /* this line is invalid to main function since top used in this function is local to this function 
	and will be destroyed when it comes out of the function */
	return temp;
}

void print(struct Node *top)
{
	struct Node *temp = top;
	if(temp == NULL)
		printf("Stack is empty");
	while(temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->link;
	}
}
int main()
{
	struct Node *temp;
	struct Node *top = NULL;
	top = push(top, 45);
	top = push(top, 50);
	top = push(top, 60);
	top = push(top, 75);
	temp = pop(top);
	top = top->link;
	print(top);
	
	return 0;
}

