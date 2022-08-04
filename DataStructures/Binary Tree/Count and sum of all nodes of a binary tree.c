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

int count_Nodes(struct Node *root)
{
	int left, right;
	while(root == NULL)
		return 0;
	left = count_Nodes(root->left);
	right = count_Nodes(root->right);
	return left + right + 1;
}

int sum_Nodes(struct Node *root)
{
	int left, right;
	if(root == NULL)
		return 0;
	left = sum_Nodes(root->left);
	right = sum_Nodes(root->right);
	return left + right + root->data;
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
	int count, sum;
	count = count_Nodes(root);
	printf("Count = %d\n", count);
	sum = sum_Nodes(root);
	printf("Sum = %d", sum);
	return 0;
}