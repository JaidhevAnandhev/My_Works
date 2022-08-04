#include<stdio.h>
#include<stdlib.h>

struct Node 
{
	/* Allocating memory for the Node */
	int data;
	struct Node *left;
	struct Node *right;
	
	
};

struct Node *newNode(int val)
{
	// Creating a new node and temp is the pointer pointing to the node
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = val;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

int main()
{
	
	struct Node *root;
	root = newNode(1);
	root->left = newNode(2);
	root->left->left = newNode(3);
	root->left->right = newNode(4);
	root->right = newNode(5);
	root->right->left = newNode(6);
	root->right->right = newNode(7);
	
}