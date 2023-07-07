#include<iostream>
#include<algorithm>
using namespace std;

int printDistinctElements(int arr[], int size)
{
    // First sort the array
    sort(arr, arr + size);

    // Then traverse throughout the array and check if 
    // element at i and i+1 are equal then skip it 
    // and traverse to the next element    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if(arr[i] == arr[i+1])
            {
                i++;
            }
        }
        cout << arr[i] << " ";
    }
    
}

int main()
{
    int size = 0;
    cout<< "Enter the size of the array = ";
    cin >> size;
    int arr[size];
    cout<<"Enter the array elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    printDistinctElements(arr, size);
}