#include<iostream>
using namespace std;

// Global variable
struct node* head;

// struct function that contains data and next pointer
struct node
{
    int data;
    struct node* next;
};

// Function to insert the node
void insert(int new_data){
    struct node* temp = (struct node *)malloc(sizeof(struct node));
    temp->data = new_data;
    temp->next = NULL;
    if(temp != NULL)
    {
        temp->next = head;
    }
    head = temp;
}

// Function to print the series of node values
void print()
{
    // Since I should not leave the head poiner reference 
    // So Declaring temp to store the head value
    struct node* temp = head;
    printf("Linked List : ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

// Main Function
int main()
{
    head = NULL;
    int count, number;
    cout << "Enter the number of elements : ";
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cout << "\n Enter a number: ";
        cin >> number;
        insert(number);
        print();
    }
    return 0;
    
}