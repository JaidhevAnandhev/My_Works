/* Doubly  Linked List*/
#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
	struct Node *prev;
};


struct Node* add_at_empty(struct Node* head, int data)
{
	/* Add a node at empty place */
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	head = temp;
	return head;
};

struct Node* add_at_beg(struct Node *head, int data)
{
	/* Add a node at the beginning of a node */
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	temp->next = head;
	head->prev = temp;
	head = temp;
	return head;
};

struct Node* add_at_end(struct Node *head, int data)
{
	/* Add a node to the end */
	struct Node *newP = (struct Node*)malloc(sizeof(struct Node));
	struct Node *ptr = head;
	newP->prev = NULL;
	newP->data = data;
	newP->next = NULL;
	while(ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = newP;
	newP->prev = ptr;
	return head;
};

struct Node* add_at_pos(struct Node *head, int data, int pos)
{
	/* Add a node at the given position */
	struct Node *newP = (struct Node*)malloc(sizeof(struct Node));
	struct Node *ptr = head;
	struct Node *ptr2 = NULL;
	newP->prev = NULL;
	newP->data = data;
	newP->next = NULL;
	
	pos--;
	while(pos != 1)
	{
		ptr = ptr->next;
		pos--;
	}
	ptr2 = ptr->next;
	ptr->next = newP;
	newP->prev = ptr;
	newP->next = ptr2;
	ptr2->prev = newP;
	return head;
};

struct Node *del_first(struct Node *head)
{
	struct Node *ptr = head;
	head = head->next;
	free(ptr);
	ptr = NULL;
	return head;
};

struct Node *del_last(struct Node *head)
{
	/* Delete the last Node */
	struct Node *ptr = head;
	struct Node *ptr2 = NULL;
	while(ptr->next != NULL)	
	{
		ptr = ptr->next;
	}
	ptr2 = ptr->prev;
	ptr2->next = NULL;
	free(ptr);
	ptr = NULL;
	return head;
};

struct Node *del_at_pos(struct Node *head, int pos)
{
	struct Node *ptr = head;
	struct Node *ptr2 = NULL;
	struct Node *ptr3 = NULL;
	
	while(pos != 1)
	{
		ptr = ptr->next;
		pos--;
	}
	ptr2 = ptr->prev;
	ptr3 = ptr->next;
	if(ptr3 = NULL)
	    void(*foo)(int) = r&del_last;
	ptr2->next = NULL;
	ptr3->prev = NULL;
	ptr2->next = ptr3;
	ptr3->prev = ptr2;
	free(ptr);
	ptr = NULL;
	return head;
};

int main()
{
	struct Node *head = NULL;
	
//	/* Add a node at empty place */
//	int value, num, end,i,count,val,pos;
//	printf("Enter the first node value = ");
//	scanf("%d", &value);
	head = add_at_empty(head, 45);
//	
//	
//	
//	/* Add a node at the beginning of a node */
//	printf("Enter a number to be printed at beginning : ");
//	scanf("%d", &num);
	head = add_at_beg(head, 21);
//	
//	
//	/* Add a node to the end */
//	printf("Enter number of nodes to be added at the end: ");
//	scanf("%d", &count);
//	for(i=0;i<count;i++)
//	{
//		printf("Enter the number %d = ", i+1);
//    	scanf("%d", &end);
   	head = add_at_end(head, 57);
   	head = add_at_end(head, 46);
//	}
//	
//	/* Add a node at the given position */
//	printf("Enter the value and it's position: ");
//	scanf("\n%d\n%d", &val, &pos);
//	head = add_at_pos(head, val, pos); 


	/* Delete the first Node */
//	head = del_first(head);

	/* Delete the last Node */
//	head = del_last(head);
	
	/* Delete at a given position */
	head = del_at_pos(head, 4);
	
		
	struct Node *ptr = NULL;
	ptr = head;
	
	while(ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->next;
	}

	
	return 0;
}