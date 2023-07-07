#include <iostream>
#include<algorithm>
using namespace std;

void rearrange(int arr[], int size)
{
    // Declaring an array to store the modifed array values
    int temp[size];
    // Declarig variables to store max and min numbers
    // Setting up two pointers 
    int small = 0;
    int large = size - 1;

    // Declaring a flag variable to check whether we need to store that value
    int flag = true;
    for(int i = 0; i < size; i++)
    {
        if(flag){
            // traversing form end
            temp[i] = arr[large--];
        }
        else{
            // traversing from 1st element
            temp[i] = arr[small++];
        }
        // setting either true or false at every iteration
        flag = !flag;
    }
    for(int i = 0; i < size; i++){
        arr[i] = temp[i];
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i< size; i++){
        printf("Oringinal Array = ");
        printf("%d ", arr[i]);
        printf("\n");
    }
    rearrange(arr, size);
    printf("\n\n");
    for(int i = 0; i<size; i++){
        printf("Modified array = ");
        printf("%d ", arr[i]);
        printf("\n");
    }
}