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

void reverseLinkedList(struct node **head_ref)
{
    struct node* temp = NULL;
    struct node* curr = (*head_ref);
    struct node* temp2 = NULL;
    while(curr != NULL)
    {
        temp2 = curr->link;
        curr->link = temp;
        temp = curr;
        curr = temp2;
    }
    (*head_ref) = temp;
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
    struct  node *head = NULL;
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
    cout << "Before Reversing : " << endl;
    print(head);
    cout<<endl;
    reverseLinkedList(&head);
    cout<<"After reversing : " << endl;
    print(head);
}