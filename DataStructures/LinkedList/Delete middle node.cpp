#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* link;
};

struct Node* del_node(struct Node *head){

		struct Node *temp = head;
		temp = head->link;
		temp = NULL;
		return head;
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
	
	head = del_node(head);

	// Duplicate copy to keep head VALUE SAFELY	
	struct Node *ptr = NULL;
	ptr = head;
	
	while(ptr != NULL)
	{
		printf("%d\n", ptr->data);
		ptr = ptr->link;
	}
	
	return 0;
}