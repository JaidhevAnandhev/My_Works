#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* link;
};

Node* add_node(struct Node *ptr, int num){
	
	struct Node *temp = (struct Node*) malloc(sizeof(struct Node));
	temp->data = num;
	ptr->link = temp;
	return temp;
}

int main()
{
	struct Node *head = (struct Node*) malloc(sizeof(struct Node));
	head->data = 45;
	head->link = NULL;
	
	struct Node *ptr = head;
	
	ptr = add_node(ptr, 20);
    ptr = head;
	
	
	while (ptr != NULL){
		printf("Data are: %d", ptr->data);
		ptr= ptr->link;
	}
	return 0;
}