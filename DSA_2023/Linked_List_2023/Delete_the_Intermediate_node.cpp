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

void deleteIntermediateNode(struct node **head_ref, int pos)
{
    struct node *prev = (*head_ref);
    struct node *curr = (*head_ref);
    while (pos != 1)
    {
        prev = curr;
        curr = curr->link;
        pos--;
    }
    prev->link = curr->link;
    free(curr);
    curr = NULL;
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
    deleteIntermediateNode(&head, 2);
    print(head);
    return 0;
}