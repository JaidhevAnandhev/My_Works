#include <iostream>
using namespace std;
int main()
{
    int arr[] = { 5, 6, 0, 4, 6, 0, 9, 0, 8 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            int temp =arr[i]; // Partitioning the array
            cout<<"temp = " << temp << endl;
            arr[i] = arr[j];
            cout << "arr[i] = " << arr[i] << endl;
            arr[j] = temp;
            cout<<"arr[j] = "<<arr[j]<<endl;
            j++;
        }
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // Print the array
    }
    return 0;
}