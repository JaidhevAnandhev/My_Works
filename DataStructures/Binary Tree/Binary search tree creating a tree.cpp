#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node *left;
	struct Node *right;
};

Node* newNode(int data)
{
	Node *new_Node = new Node();
	new_Node->data = data;
	new_Node->left = NULL;
	new_Node->right = NULL;
	return new_Node;
}

Node *insert_Node(Node *root, int data)
{ 
	if(root == NULL)
		return newNode(data);
    if(data <= root->data)
		root->left = insert_Node(root->left, data);
	else
		root->right = insert_Node(root->right, data);
	return root;
}

void Inorder(Node *root)
{
	if(root == NULL)
		return;
	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);	
}

int main()
{
	struct Node *root;
	root = insert_Node(root, 15);
	root = insert_Node(root, 20);
	root = insert_Node(root, 10);
	root = insert_Node(root, 5);
	Inorder(root);
}









