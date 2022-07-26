/* Singly linked list*/
/*Create a singly linked list*/

#include<stdio.h>
#include<stdlib.h>

/* Create a struct node */
struct Node{
	int data;
	struct Node *link;
};

struct Node* add_at_beg(struct Node *head, int data)
{
	/* Inserting a node at the beginning */
	struct Node *current = (struct Node*)malloc(sizeof(struct Node));
	current->data = data;
	current->link = NULL;
	current->link = head;
	head = current;
	return head;
};

void add_at_pos(struct Node *head, int data, int pos)
{
	/* Inserting a node at intermediate position*/
	struct Node *ptr = NULL;
	ptr = head;
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = data;
	temp->link = NULL;
	pos--;
	while(pos != 1)
	{
		ptr = ptr->link;
		pos--;
	}
	temp->link = ptr->link;
	ptr->link = temp;
	
}

void add_at_end(struct Node *head, int data)
{
	
	/* Inserting a node at the end */
	struct Node *ptr = NULL;
	ptr = head;
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = data;
	temp->link = NULL;
	while(ptr->link != NULL)
	{
		ptr = ptr->link;
	}
	ptr->link = temp;
}

struct Node* del_first(struct Node *head)
{
	/* Delete the first Node*/
	struct Node *ptr = NULL;
	ptr = head;
	head = head->link;
	free(ptr);
	ptr = NULL;
	return head; 
		
}

struct Node* del_last(struct Node *head)
{
	/* Delete the last Node */
	struct Node *ptr = head;
	struct Node *ptr2 = head;
	if(head->link == NULL){
		printf("Linked list is empty.");
	}
	while(ptr->link != NULL)
	{
		ptr2 = ptr;	
		ptr = ptr->link;
	}
	ptr2->link = NULL;
	free(ptr);
	ptr = NULL;	
	
	return head;
};

void del_pos(struct Node *head, int pos)
{
	/* Delete the intermediate node */
	struct Node *prev = head;
	struct Node *current = head;
	
	while(pos != 1)
	{
		prev = current;
		current = prev->link;
		pos--; 
	}
	prev->link = current->link;
	free(current);
	current = NULL;
	
}

struct Node* del_list(struct Node *head)
{
	
	while(head != NULL)
	{
		head = head->link;
	}
	free(head);
    head = NULL;
	return head;
	
};

struct Node* reverse(struct Node *head)
{
	/* Reverse the entire list */
	struct Node *temp = NULL;
	struct Node *temp2 = NULL;
	
	while(head != NULL)
	{
		temp2 = head->link;
		head->link = temp;
		temp = head;
		head = temp2;
	}
	head = temp;
	return head;
};

int main()
{
	
	struct Node *head = (struct Node*)malloc(sizeof(struct Node));
	head->data = 45;
	head->link = NULL;
	
	/* Inserting a node at the beginning */
	head = add_at_beg(head, 65);
	head = add_at_beg(head, 46);
	
	/* Inserting a node at the end */
    add_at_end(head, 30);
    add_at_end(head, 100);
	
	/* Inserting a node at intermediate position*/
	add_at_pos(head, 108, 4);
	
	/* Delete the first Node*/
	head = del_first(head);
	
	/* Delete the last Node */
	head = del_last(head);
	
	/* Delete the intermediate node */
	del_pos(head, 3);
	
	/* Reverse the entire list */
	head = reverse(head);
	
	/* Delete the entire list */
/*	head = del_list(head);
	if(head == NULL)
		printf("List is now empty"); */
	
	struct Node *ptr = NULL;
	ptr = head;
	
	while(ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->link;
	}

	/* count the number of nodes*/
	/*  while(ptr != NULL){
		count++;
		ptr = ptr->link;
	}
	printf("\nCount = %d", count);*/
	
	return 0;
}