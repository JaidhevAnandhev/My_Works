#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* link;
};

void add_pos(struct Node* head, int data, int pos){
	struct Node *ptr = NULL;
	ptr = head;
	struct Node *ptr2 = (struct Node*)malloc(sizeof(struct Node));
	ptr2->data = data;
	ptr2->link = NULL;
	
	pos--;
	while(pos != 1){
		ptr = ptr->link;
		pos--;
	}
	ptr2->link = ptr->link;
	ptr->link = ptr2;
}


int main(){
	
	// Creating nodes
	struct Node *head = (struct Node*)malloc(sizeof(struct Node));
	head->data = 45;
	head->link = NULL;
	
	struct Node *current = (struct Node*)malloc(sizeof(struct Node));
	current->data = 98;
	current->link = NULL;
	head->link = current;
	
	current = (struct Node*)malloc(sizeof(struct Node));
	current->data = 3;
	current->link = NULL;
	head->link->link = current;
	
	//New node to be added at a particular position
	int data = 67, pos = 4;
	add_pos(head, data, pos);
	
	//To traverse from the beginning to display the values
	struct Node *ptr = head;
	
	// Print the data
	
	while(ptr != NULL)
	{
		printf("%d\n", ptr->data);
		ptr = ptr->link;
	}
	
	return 0;
	
}
	
	
	
