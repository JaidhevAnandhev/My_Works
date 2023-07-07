#include<iostream>
using namespace std;

int findNonRepeatedElement(int arr[], int size)
{
    
    for (int i = 0; i < size; i++)
    {
        // if we put the count within the for loop it returns which element(s) are non repeitive
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            // if two elements are same then it increments the count
            if(arr[i] == arr[j]){
                count ++;
            }
        }
        if(count == 1){
            cout << "Non repeated element = "<<arr[i]<<endl;
        }
    }
    return 0;
}

int main()
{
    int size = 0;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the array elements "<< endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    findNonRepeatedElement(arr, size);
}