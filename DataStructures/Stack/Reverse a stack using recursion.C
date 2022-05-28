#include<stdio.h>
#include<stdlib.h>
struct sNode
{
	char data;
	struct sNode *next;
};
/* Function declaration */
void push(struct sNode** top_ref, int new_data);
int pop(struct sNode** top_ref);
bool isEmpty(struct sNode* top);
void print(struct sNode* top);

/* Below is the recursive function of the given function */
void insertAtBottom(struct sNode** top_ref, int item)
{
	if (isEmpty(*top_ref))
		push(top_ref, item);
		
	else
	{
		int temp = pop(top_ref);
		insertAtBottom(top_ref, item);
		push(top_ref, temp);
	}
}

/* Reversing the given stack */
void reverse(struct sNode** top_ref)
{
	if(!isEmpty(*top_ref))
	{
		printf("\nBefore pop top_ref = %d \n", *top_ref);
		int temp = pop(top_ref);
		printf("\nAfter pop new top_ref = %d and value popped into old top_ref as temp = %d", *top_ref, temp);
		reverse(top_ref);
		printf("\n Old top_ref = %d \n", *top_ref);
		insertAtBottom(top_ref, temp);
		printf("\nAfter insert at bottom by creating A new top_ref = %d and temp = %d\n", *top_ref, temp);

	}
}
/* Program begins */
int main()
{
	struct sNode *s  = NULL;
	push(&s, 4);
    push(&s, 3);
    push(&s, 2);
    push(&s, 1);
 	printf("Original stack:\n");
 	print(s);
 	reverse(&s);
 	printf("\nReversed stack:\n");
 	print(s);
 	pop(&s);
 	printf("\nPopped out the 1st element\n");
    print(s);	
	return 0;
}
/* Check if the stack is empty */
bool isEmpty(struct sNode *top){
	return (top == NULL)? 1 : 0;
}

/* Function to push items to stack */
void push(struct sNode** top_ref, int item)
{
	/* Allocating the memory according to the data type declared in the structure */
	struct sNode* new_node = (struct sNode *) malloc(sizeof(struct sNode));
	
	if(new_node == NULL)
	 	exit(0); /* It will throw out an error */
	 	
	(*new_node).data = item;
	(*new_node).next = (*top_ref);
	(*top_ref) = new_node;
	
}

/* Function to push an item from the stack */
int pop(struct sNode** top_ref)
{
	char res;
	struct sNode *top;
	
	if(*top_ref == NULL)
		return -1;
	else
	{
		top = *top_ref;
		res = (*top).data;
		*top_ref = (*top).next;
		free(top);
		return res;
	}
}
void print(struct sNode* top)
{
	while(top != NULL)
	{
		printf("%d\t", (*top).data);
		top = (*top).next;
	}
}





