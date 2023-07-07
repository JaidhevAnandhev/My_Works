#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {2,1,4,3,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}