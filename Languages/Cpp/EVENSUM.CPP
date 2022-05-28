#include<iostream.h>
//Program to print even and odd sum for a given array
void EvenOddSum(int arr[], int n)
{
	int even = 0;
	int odd = 0;
	for( int i = 0; i<n; i++)
	{
		if(i % 2 == 0)
			even += arr[i];
		else
			odd += arr[i];
	}
	cout<<"Even Index positions sum"<<even<<endl;
	cout<<"Odd Index positios sum :"<<odd<<endl;
}
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6,10,11 };
	int n = sizeof(arr) / sizeof(arr[0]);

	EvenOddSum(arr, n );
	return 0;
}