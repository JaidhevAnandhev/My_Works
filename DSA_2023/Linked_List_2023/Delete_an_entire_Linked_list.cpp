#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* link;
};

void push(struct node **head_ref, int data)
{
    struct node* temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = (*head_ref);
    (*head_ref) = temp;
}

void deleteEntireLinkedList(struct node **head_ref)
{
    struct node* temp = (*head_ref);
    while((*head_ref) != NULL)
    {
        temp = temp->link;
        free((*head_ref));
        (*head_ref) = temp;
    }
    cout << "Now the list is empty.";
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
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    deleteEntireLinkedList(&head);
    print(head);
    return 0;
}