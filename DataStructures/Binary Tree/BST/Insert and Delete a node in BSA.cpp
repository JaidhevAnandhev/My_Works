/* Delete a node in a given BST */
#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *left;
	struct Node *right;
};

Node* create_Node(Node *root, int data)
{
	Node *newNode = new Node();
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

Node *insert_Node(Node *root, int data)
{
	if(root == NULL)
		return create_Node(root, data);
    if(data <= root->data)
		root->left = insert_Node(root->left, data);
	else
		root->right = insert_Node(root->right, data);
	return root;
}

// Function to find the minimum node 
Node* FindMin(Node* root)
{
	while(root->left != NULL) 
		root = root->left;
	return root;
}

/* Function to delete a node from a given BST */
Node* del_Node(struct Node *root, int val)
{
	// If root is NULL it simply returns NULL only
	if(root == NULL)
		return NULL;
		
	// Passing the function recursively to left subtree if given value is less than the root value
	else if(val < root->data)
		root->left =  del_Node(root->left, val);
		
	// Passing the function recursively to right subtree if given value is more than the root value
	else if(val > root->data)
		root->right =  del_Node(root->right, val);
		
	// When the Node to be deleted is found then this else part works
    else
    {
    	// Case when there are no subtress and no child nodes
    	// Then the BST will become NULL
    	if(root->left == NULL && root->right == NULL)
    	{
    		delete root;
    		root = NULL;
    		return root;
		}
		// CASE 1: ==>> When a root node has either left child or right child (Having only one child)
		else if(root->left == NULL)	
		{
			struct Node *temp = root;
			root = root->right;
			delete temp;
			temp = NULL;
			return root;
		}
		else if(root->right == NULL)
		{
			struct Node *temp = root;
			root = root->left;
			delete temp;
			temp = NULL;
		}
		
		// Case 2: ==>>  When a Node has both left and right child (Having two child)
		else
		{
			struct Node *temp = FindMin(root->right);
			root->data = temp->data;
			root->right = del_Node(root->right, temp->data);
		}
	}
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
	Node *root;
	root = insert_Node(root, 20);
	root = insert_Node(root, 15);
	root = insert_Node(root, 10);
	root = insert_Node(root, 19);
	root = del_Node(root, 20);
	Inorder(root);
}