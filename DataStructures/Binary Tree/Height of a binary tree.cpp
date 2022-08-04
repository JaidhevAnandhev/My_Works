/* Program to find the height of a binary tree */
#include<iostream>

struct Node{
	int data;
	struct Node *left;
	struct Node* right;
};

struct Node *newNode(int data)
{
	struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

int tree_height(struct Node *root)
{
	if(root == NULL)
		return -1;
	// Recursive function
	int l_height = tree_height(root->left);
	int r_height = tree_height(root->right);
	return std::max(l_height, r_height)+1;
}

int main()
{
	int  h;
	struct Node *root;
	root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->left->right->right = newNode(6);
	h = tree_height(root);
	printf("Height of the tree is = %d", h);
}