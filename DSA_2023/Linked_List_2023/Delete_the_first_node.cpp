#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};

void push(struct node **head_ref, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = (*head_ref);
    (*head_ref) = temp;
}

void deleteFirstNode(struct node **head_ref)
{
    struct node *temp = (*head_ref);
    if(temp == NULL){
        cout << "The Linked list is already empty.";
    }
    else{
        (*head_ref) = (*head_ref)->link;
        free(temp);
    }
}

void print(struct node *head)
{
    struct node* temp = head;
    while (temp != NULL)    
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
    deleteFirstNode(&head);
    deleteFirstNode(&head);
    print(head);
    return 0;
}