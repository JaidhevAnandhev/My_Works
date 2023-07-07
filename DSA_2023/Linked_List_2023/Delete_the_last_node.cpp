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

struct node* deleteLastNode(struct node **head_ref)
{                       
    struct node *ptr = (*head_ref);
    if((*head_ref) == NULL){
        cout << "Linked List is already emplty.";
    }
    else if ((*head_ref)->link == NULL)
    {
        free((*head_ref));
        (*head_ref) = NULL;
    }
    else
    {
        struct node* temp = (*head_ref);
        struct node* temp2 = (*head_ref);
        while(temp->link != NULL){
            temp2 = temp;
            temp = temp->link;
        }

        temp2->link = NULL;
        free(temp);
        temp = NULL;
    }
    return (*head_ref);
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
    deleteLastNode(&head);
    deleteLastNode(&head);
    print(head);
    return 0;
}