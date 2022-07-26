#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *link;
};

int main()
{
	struct Node *head = (struct Node*)malloc(sizeof(struct Node));
	struct Node *current1 = (struct Node*)malloc(sizeof(struct Node));
	struct Node *current2 = (struct Node*)malloc(sizeof(struct Node));
	
	head->data = 50;
	head->link = NULL;
	
	current1->data = 100;
	current1->link = NULL;
	head->link = current1;
	
	current2->data = 150;
	current2->link = NULL;
	current2->link = head;
	head = current2;       // place the node to the beginning

	struct Node *temp = head;
	
	while(temp != NULL)
	{	
		printf("%d\n", temp->data);
		temp = temp->link;
    }
	return 0;
}