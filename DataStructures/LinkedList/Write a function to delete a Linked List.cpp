#include<iostream>
using namespace std;
 
/* Link list node */
class Node {
public:
    int data;
    Node* next;
};
 
/* Function to delete the entire linked list */
void deleteList(Node** head_ref)
{

    Node* current = *head_ref;
    Node* next = NULL;
    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
    
    *head_ref = NULL;
}
 
void push(Node** head_ref, int new_data)
{
    /* Allocate node */
    Node* new_node = new Node();
 
    /* Put in the data */
    new_node->data = new_data;
 
    /* Link the old list off the new node */
    new_node->next = (*head_ref);
 
    /* Move the head to point to the new node */
    (*head_ref) = new_node;
}
 
/* Driver code*/
int main()
{
    /* Start with the empty list */
    Node* head = NULL;
    push(&head, 1);
    push(&head, 4);
    push(&head, 1);
    push(&head, 12);
    push(&head, 1);
    
    cout << "Deleting linked list\n";
    deleteList(&head);
    cout << "\nLinked list deleted";
    return 0;
}
