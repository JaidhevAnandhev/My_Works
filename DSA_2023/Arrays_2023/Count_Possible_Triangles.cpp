#include<iostream>
#include<algorithm>
using namespace std;

int triangularArray(int arr[], int size)
{
    sort(arr, arr+size);
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            for (int k = j+1; k < size; k++)
            {
                if(arr[i] + arr[j] > arr[k]
                && arr[j] + arr[k] > arr[i]
                && arr[i] + arr[k] > arr[j]){
                    count++;
                }
            }
            
        }
        
    }
    return count;
}

int main()
{
    int arr[] = {2,1,5,4,6,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    if (triangularArray(arr, size) % 3 == 0)
    {
        cout << "Then it forms a triangle \n";
    }
    else{
        cout<<"Then it does not form a triangle \n";
    }
    
    cout << "Count is =  "<< triangularArray(arr, size);
    return 0;
}