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

void Inorder(Node *root)
{
	if(root == NULL)
		return;
	Inorder(root->left);
	printf("%d ", root->data);
	Inorder(root->right);	
}

bool isBST(struct Node* root, struct Node* min, struct Node *max)
{
	if(root == NULL)
	{
		return true;
	}
		
	if(min != NULL && min->data >= root->data)
	{
		return false;	
	}
		
	if(max != NULL && max->data <= root->data)
	{
		return false;
	}	
	
	bool left = isBST(root->left, min, root);
	bool right = isBST(root->right, root, max);
	
	return left and right;
}

int main()
{
	
	struct Node *root;
	root = newNode(2);
	root->left = newNode(0);
	root->left->left = newNode(-1);
	root->left->right = newNode(1);
	root->right = newNode(5);
	root->right->left = newNode(4);
	root->right->right = newNode(7);
//	root = newNode(1);
//	root->left = newNode(2);
//	root->left->left = newNode(3);
//	root->left->right = newNode(4);
//	root->right = newNode(5);
//	root->right->left = newNode(6);
//	root->right->right = newNode(7);
	Inorder(root);

	// Function to check whether the given tree is BST or not
    if(isBST(root, NULL, NULL))
    	printf("\nIt is a Binary Search tree");
    else
    	printf("\nIt is not a Binary Search tree");
	
}