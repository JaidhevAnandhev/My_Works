/* Pre Order, Inorder, Post Order traversal */
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

void Preorder(struct Node* root)
{
	if(root != NULL)
	{
		// Order of printing the data in PreOrder
		// Root -> Left -> Right
		/*		   	 1                 
				  /    \
				 2      5   ===>>> 1  2  3  4  5  6  7
				/ \    / \
			   3   4  6   7
		*/
		printf("%d ", root->data);
		/* Recursive Function */
		Preorder(root->left);
		Preorder(root->right);
	}
	
}

void Inorder(struct Node *root)
{
	if(root != NULL)
	{
		// Order of printing the data in InOrder
		// Left -> Root -> Right
		/*		   	 1                 
				  /    \
				 2      5   ===>>> 3  2  4  1  6  5  7
				/ \    / \
			   3   4  6   7
		*/
		Inorder(root->left);
		printf("%d ", root->data);
		Inorder(root->right);
		
	}
}

void Postorder(struct Node *root)
{
	if(root != NULL)	
	{
		// Order of printing the data in InOrder
		// Left -> Root -> Right
		/*		   	 1                 
				  /    \
				 2      5   ===>>> 3  4  2  6  7  5  1
				/ \    / \
			   3   4  6   7
		*/
		Postorder(root->left);
		Postorder(root->right);
		printf("%d ", root->data);
		
	}
}

int sumOfNodes(struct Node *root, int k){
/* Finding the sum of nodes at a particular level */

	if(root == NULL) 
		return 0;
	if(k-1 ==  0) 
		return root->data;
	return (sumOfNodes(root->left, k-1) + sumOfNodes(root->right, k-1));
}

int main()
{
	int level;
	struct Node *root;
	root = newNode(1);
	root->left = newNode(2);
	root->left->left = newNode(3);
	root->left->right = newNode(4);
	root->right = newNode(5);
	root->right->left = newNode(6);
	root->right->right = newNode(7);
	printf("PreOrder traversal\n");
	Preorder(root);
	printf("\n");
	printf("InOrder traversal\n");
	Inorder(root);
	printf("\n");
	printf("PostOrder traversal\n");
	Postorder(root);
	printf("\n");
	printf("Enter a level = ");
	scanf("%d", &level);
	int sum = sumOfNodes(root, level);
	printf("Sum of Nodes at level %d = %d", level, sum);
}