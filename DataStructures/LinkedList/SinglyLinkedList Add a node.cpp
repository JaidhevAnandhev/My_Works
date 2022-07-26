#include<stdio.h>
#include<stdlib.h>

// Creating a structure
struct Node{
	int data;
	struct Node* link;
};

int main()
{
	struct Node *head = (struct Node*)malloc(sizeof(struct Node));  // Create a node and assigning base address to head 
	// Giving the data
	head->data = 40;
	head->link = NULL;
	
//	printf("Head data = %d\n", head->data);
//	printf("Head address = %f", head->link);
	
	// creating a new node
	 Node *current = (struct Node*) malloc(sizeof(struct Node));
	 current->data = 98;
	 current->link = NULL;
	 //connecting the two nodes to the end
	 head->link = current;
	 
	 current = (struct Node*) malloc(sizeof(struct Node));
	 current->data = 30;
	 current->link = NULL;
	 //connecting the two nodes to the end
	 //head->link->link = current;
	 current->link = head;
	 head = current;
	 
	 
	 struct Node *ptr = NULL;                       
	 ptr = head;

	while(ptr != 0){
		printf("Data are : %d\n", ptr->data);
		ptr = ptr->link;
	}
	
	return 0;
}