#include<iostream>
using namespace std;

/* Creating a structure to store and data and pointers */
struct Node{
	int data;
	struct Node *left;
	struct Node *right;
};

/*Creating a new node to store node data and it's left and right address */
Node* newNode(int data)
{
	Node *new_Node = new Node();
	new_Node->data = data;
	new_Node->left = NULL;
	new_Node->right = NULL;
	return new_Node;
}

/* Inserting the nodes in a BST accoring to following Rules :
	1. Insert a root node to the BST
	2. Data you further insert like if a number is less than a root node then it should be inserted at the left of root node.
	3. If the data is more than the root data then ot should be placed at the right 
	4. This rule should also be applied to the child  nodes */

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

/* Printing the data in the (INORDER) Method */
void Inorder(Node *root)
{
	if(root == NULL)
		return;
	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);	
}

/* Function to search a data in a given BST */
bool search_Node(Node *root, int data)
{
	if(root == NULL)
		return false;
		
	else if(root->data == data)
		return true;
		
	else if(data <= root->data)
		return search_Node(root->left, data);
		
	else
	// data > root->data
		return search_Node(root->right, data);
}

// Function to check whether the given tree is BST or not
bool isBST(Node* root, Node* min, Node *max)
{
	if(root == NULL)
	{
		return true;
	}
		
	if(min != NULL && min->data <= root->data)
	{
		return true;
	}
		
	if(max != NULL && max->data >= root->data)
	{
		return true;
	}	
	
	bool left = isBST(root->left, min, root);
	bool right = isBST(root->right, root, max);
	
	return left and right;
}
	
int main()
{
	struct Node *root;
	root = insert_Node(root, 15);
	root = insert_Node(root, 20);
	root = insert_Node(root, 10);
	root = insert_Node(root, 5);
	Inorder(root);
	int num;
	printf("\nEnter a number = ");
	cin>>num;
	/* Function to check whether the node is present in the BST or not */
	if(search_Node(root, num) == true)
		cout<<"DATA FOUND!";
	else
		cout<<"DATA NOT FOUND";
		
	// Function to check whether the given tree is BST or not
    if(isBST(root, NULL, NULL) == true)
    	printf("\nIt is a Binary Search tree");
    else
    	printf("\nIt is not a Binary Search tree");
	
	return 0;
}