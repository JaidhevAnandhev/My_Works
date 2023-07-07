#include<iostream>
using namespace std;

void arrayReverse(int arr[], int start, int end)
{
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int temp;
    for (int i = 0; i < arr_size; i++)
    {
        if(start < end){
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
}

void leftMoveArray(int arr[], int m_factor, int size)
{
    arrayReverse(arr, 0, m_factor-1);
    arrayReverse(arr, m_factor, size-1);
    arrayReverse(arr, 0, size-1);
}

int main()
{     
    int arr[10];
    cout << "Enter the size of the array: ";    
    int size = sizeof(arr)/sizeof(arr[0]);
    cin >> size;
    if(size > 10){
        cout<<"Not allowed.";
        return -1;
    }
    cout << "Enter array elements: \n"; 
    for(int i = 0; i< size; i++)
    {
        cin >> arr[i];
    }
    int m_factor;
    cout << "Enter by how much factor the array to  be moved: ";
    cin >> m_factor;
    leftMoveArray(arr, m_factor, size);
    for(int i = 0; i< size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}