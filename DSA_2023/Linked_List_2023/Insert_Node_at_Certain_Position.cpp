#include<iostream>
using namespace std;

// Create a struct node for data and next ptr.
struct node
{
    int data;
    struct node* link;
};

// Function to push the elements to the front.
void push(struct node **head_ref, int data)
{
    struct node* temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = (*head_ref);
    (*head_ref) = temp;
}

// Function to insert the node at certain position
void insertAtCertainPosition(struct node **head_ref, int data, int pos)
{
    struct node* temp = (struct node *)malloc(sizeof(struct node));
    struct node *ptr = (*head_ref);
    temp->data = data;
    temp->link = NULL;
    // Assigning a ptr named ptr2 to the temp node
    struct node* ptr2 = temp;
    //Since any list in C++ starts form 0 so decrementing the value by 1.
    pos--;
    //Function that helps to traverse the array
    while (pos != 1)                
    {
        ptr = ptr->link;
        pos--;
    }
    ptr2->link = ptr->link;
    ptr->link = ptr2;
}

void print(struct node *head)
{
    struct node *temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }
}

int main()
{
    struct node* head = NULL;
    push(&head, 5);
    push(&head, 4);
    push(&head, 2);
    insertAtCertainPosition(&head, 3, 2);
    insertAtCertainPosition(&head, 5, 3);
    print(head);
    return 0;
}