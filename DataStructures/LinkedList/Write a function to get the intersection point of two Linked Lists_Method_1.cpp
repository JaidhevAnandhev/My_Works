/* Intersection of two singly linked list and find the intersection of node */
#include<iostream>
using namespace std;

/* Linked list node */
class Node{
	public:
		int data;
		Node* next;
};

/* Function declaration */
int getIntersectionNode(Node* head1, Node* head2);
int getCount(Node* head);
int _getIntersectionNode(int diff, Node* head1, Node* head2);

/* function to get the two linked lists head1 and head2 */
int getIntersectionNode(Node* head1, Node* head2) 
{
	/* Count the number of nodes in both the linked lists */
	int c1 = getCount(head1);
	int c2 = getCount(head2);
	/* cout<<"Count of 1st linked list = "<<c1<<endl;
	cout<<"Count of 2nd Linked list = "<<c2<<endl; */
	
	int diff = 0;
	if(c1 > c2)
	{
		diff = c1 - c2;
		return _getIntersectionNode(diff, head1, head2);
	}
	else
	{
		diff = c2 - c1;
		return _getIntersectionNode(diff, head2, head1);
	}
	//cout<<"Difference = "<<diff<<endl;
	
	return diff; 
}

/* Function to get the intersection point of two linked lists head1, head2 where head1 has diff more nodes than head2 */
int _getIntersectionNode(int diff, Node* head1, Node* head2)
{
	/* Stand at the starting of the linked list */
	Node* current1 = head1;
	Node* current2 = head2;
	
	/* Traversr the 1st list until the diff */
	for(int i = 0; i < diff; i++){
		if(current1 == NULL){
			return -1;
		}
		current1 = current1->next;
	}
	/* Move both pointers of both list till they intersect with each other */
	while(current1 != NULL && current2 != NULL){
		if(current1 == current2)
			return current1->data;
		
		/* Move both the pointers forward */
		current1 = current1->next;
		current2 = current2->next;
			
	}
	
	return -1;
}

/* Function to get the count of the linked lists*/
int getCount(Node* head)
{
	int count = 0;
	while(head != NULL)
	{
		count++;
		head = head->next; 
	}
	return count;
}




// Driver Code
int main()
{
	  /*
        Create two linked lists
     
        1st 3->6->9->15->30
        2nd 10->15->30
     
        15 is the intersection point
    */
	Node* newnode;
	
	/* Addition of New nodes */
	Node* head1 = new Node();
	Node* head2 = new Node();
	head1->data = 3;
	head2->data = 10;
	
	newnode = new Node();
	newnode->data = 6;
	head1->next = newnode;  //  3->6
	
	newnode = new Node();
	newnode->data = 9;
	head1->next->next = newnode; // 3->6->9
	
	newnode = new Node();
	newnode->data = 15;
	head1->next->next->next = newnode; // 3->6->9->15
	head2->next = newnode; // 10->15
	
	newnode = new Node();
	newnode->data = 30;
	head1->next->next->next->next = newnode; // 3->6->9->15->30
	head2->next->next = newnode; // 10->15->30
	
	cout<<"Intersection of two linked lists = "<<getIntersectionNode(head1, head2)<<endl;
	
	
	
		
}
