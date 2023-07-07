#include <iostream>
#include<algorithm>
using namespace std;

int leaderElement(int arr[], int size)
{
    int max_right = arr[size-1];
    // Always print the rightmost element
    cout << max_right << " ";
    for(int i = size-1 ; i >= 0; i--)
    {
        if(arr[i] > max_right){
            max_right = arr[i];
            cout << max_right << " ";
        }
    }
}

int main()
{
    int size = 0;
    cout << "Ente the size of the array = ";
    cin >> size;
    int arr[size];
    cout<<"Enter the array elements = "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    leaderElement(arr, size);
}