#include<iostream>
using namespace std;

void separateEvenOdd (int arr[], int size)
{
    // For getting the even numbers from that array  
    printf("Even numbers: \n");
    for (int i = 0; i < size; i++)
    {            
        if(arr[i] % 2 == 0){
            printf("%d ", arr[i]);
        }
    }

    // For getting the odd numbers from that array
    printf("\nOdd Numbers: \n");
    for(int i = 0; i< size; i++)
    {            
        if(arr[i] % 2 != 0){
            printf("%d ", arr[i]);
        }
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr) / sizeof(arr[0]);
    separateEvenOdd(arr, size);
}