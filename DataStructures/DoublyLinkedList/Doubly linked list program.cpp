#include<stdio.h>
#include<stdlib.h>

// Create a struct Node for doubly linked list
// Creating two pointers named prev and next
// Self referencing structure
struct Node{
	
	int data;
	struct Node *prev;
	struct Node *next;
};

// Creating a function of struct Node type to add the node at first
//Only 1st node can be created with this (Remember we will create another function too.... )
// To create a head node :)
struct Node *add_At_Empty (struct Node *head, int data)
{
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	head = temp;
	return head;
};

// Function to add the node at the beginning of first node created in the empty function
struct Node* Add_At_Beg(struct Node* head, int data)
{
	struct Node *temp1 = (struct Node*)malloc(sizeof(struct Node));
	temp1->prev = NULL;
	temp1->data = data;
	temp1->next = NULL;
	temp1->next = head;
	head->prev = temp1;
	head = temp1;
	return head;
	
}

// Funtion to append the node of struct Node type
struct Node* Add_at_End(struct Node* head, int data)
{
	struct Node *temp2 = (struct Node*)malloc(sizeof(struct Node));
	temp2->prev = NULL;
	temp2->data = data;
	temp2->next = NULL; // Successfully created a node and pointed with ptr name temp2
	head->next->next = temp2;
	temp2->prev = head->next;
	return head;
};

struct Node* add_at_pos(struct Node* head, int data, int pos)
{
	struct Node *newP = (struct Node*)malloc(sizeof(struct Node));
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	struct Node *temp2 = (struct Node*)malloc(sizeof(struct Node));

	newP->prev = NULL;
	newP->data = data;
	newP->next = NULL;
	if(temp->next == NULL){
		temp->next = newP;
		newP->prev = temp;
	}
		
		while(pos != 1)
		{
			temp = temp-> next;
			pos--;
		}temp2 = temp->next;
		temp->next = newP;
		temp2->prev = newP;
		newP->next = temp2;
		newP->prev = temp;
	}                  
		return head;
	
// Driver code

int main()
{
	struct Node *head = NULL;
	head = add_At_Empty(head, 45);
	head = Add_At_Beg(head, 50);
	head = Add_At_Beg(head, 100);
	head = Add_at_End(head, 150);
	head = add_at_pos(head, 25, 3);
	
	
	struct Node *ptr = NULL;
	ptr = head;
	
	while(ptr != NULL){
		printf("Data are : %d\n", ptr->data);
		ptr = ptr->next;
	}
	
	return 0;
}

