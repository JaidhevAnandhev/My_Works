#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
};
void push(Node** head_ref, int new_data)
{
	/* Allocate Node*/
	Node* new_node = new Node();
	
	/* Add data in it*/
	new_node->data = new_data;
	
	/*link the old list off the new node */
	new_node->next = (*head_ref);
	
	/* Move the head to point to the new node*/
	(*head_ref) = new_node;
}
int count(Node* head, int search_for)
{
	Node* current = head;
	int count = 0;
	while(current != NULL)
	{
		if(current->data == search_for)
			count++;
		current = current->next;
	}
	return count;
}
int main()
{
	Node* head = NULL;
	push(&head,1);
	push(&head,3);
	push(&head,1);
	push(&head,2);
	push(&head,1);
	 
	 /* Check the count */
	 cout<<"Count of 1 is "<<count(head,1);
	 return 0;
}
