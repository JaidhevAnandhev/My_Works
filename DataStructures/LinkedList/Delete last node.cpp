#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* link;
};

void push(Node* head, int new_data)
{
    struct Node *new_node = head;
    new_node->data = new_data;
    new_node->link = head;
    head = new_node;
}

void display(Node* node)
{
	while(node != NULL)
	{
		printf("%d\n", node->data);
		node = node->link;
	}
}


/*struct Node* del_last_node(struct Node *head){
	struct Node* temp1 = head;
	struct Node* temp2 = head;
	temp1 = head->link;
	temp2 = head->link->link;
	temp2->link = NULL;
	free(temp2);
	temp1 = NULL;
	return head;
	
}*/

int main(){
	
	// Creating nodes
	Node* head = NULL;
	
	//Inserting values
	push(head, 12);
	push(head, 11);
    push(head, 34);
    push(head, 52);
	
	// Duplicate copy to keep head VALUE SAFELY	
	display(head);
	return 0;
}