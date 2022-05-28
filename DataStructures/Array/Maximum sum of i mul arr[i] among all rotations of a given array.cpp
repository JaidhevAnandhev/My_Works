#include<iostream>
using namespace std;
int findMax(int a, int b){
	if(a>b)
		return a;
	return b;
}
int calculateMaxSum(int arr[], int n){
   int maxSum = 0, sum = 0;
   for (int i=0; i<n; i++){
      sum = 0;
      for (int j=0; j<n; j++){
         int index = (i+j)%n;
         sum += j*arr[index];
      }
      maxSum = findMax(maxSum, sum);
   }
   return maxSum;
}
int main()
{
   int arr[] = {4, 8, 1, 5};
   int n = sizeof(arr)/sizeof(arr[0]);
   cout<<"The maximum sum of all the rotation of the array is "<<calculateMaxSum(arr, n);
   return 0;
}