#include<iostream>
using namespace std;

// Global variable declaration
struct node
{
    int data;
    struct node* next;
};

int main()
{
    struct node *head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    head->data = 45;
    head->next = NULL;
    printf("%d", head->data);
    return 0;
}