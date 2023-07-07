#include<iostream>
using namespace std;

// Create a struct function
struct node
{
    int data;
    struct node *link;
};

//Insert the node at the beginning
void push(struct node **head_ref, int data)
{
    struct node *temp =(struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = (*head_ref);
    (*head_ref) = temp;
}

// Function to insert the node at the end
void insertAtEnd(struct node **head_ref, int data)
{
    // Create a new node and assign it to temp variable "MEMORY ALLOCATION"
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    struct node* ptr = *head_ref;
    temp->data = data;
    temp->link = NULL;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}

// print the Node data  
void print(struct node* head)
{
    struct node* temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->link;
    }
}
int main()
{
    struct node *head = NULL;
    push(&head, 4);
    push(&head, 5);
    push(&head, 6);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 2);
    push(&head, 10);
    print(head);
    return 0;
}