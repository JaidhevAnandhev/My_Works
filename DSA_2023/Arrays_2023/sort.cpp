#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {10, 7, 9, 2, 8, 3, 5, 4, 6, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Sizeof(arr) = %d\n", sizeof(arr));
    printf("Size = %d\n", size);
    sort(arr, arr+size);
    cout << "Sorted array = "<<endl;
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}