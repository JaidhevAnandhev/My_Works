/* Program to print the level order traversal of a binary tree */

#include<iostream>
#include<queue>


struct Node{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int val)
	{
		data = val;
		left = NULL;
		right = NULL;
	}
};

void LevelOrder(struct Node *root)
{
	/* Create a Queue */
	/* To store the address of nodes sequentially */
	if(root == NULL)
		return;
	std::queue<Node *> q;
	q.push(root);
	printf("%d ", root->data);
	
	while(!q.empty())
	{
		Node *curr = q.front();
		q.pop();
		if(curr->left != NULL)
			q.push(curr->left);
			printf("%d ", curr->left->data);
		if(curr->right != NULL)
			q.push(curr->right);
			printf("%d ", curr->right->data);
	}
}



int main()
{
	Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(7);
	LevelOrder(root);
	return 0;
}

