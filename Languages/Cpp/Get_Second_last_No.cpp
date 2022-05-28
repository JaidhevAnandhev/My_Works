#include<iostream>
using namespace std;
int main()
{
		// Get the input array size from the user
		int n = 0;
		cout<<"Enter the array size : ";
		cin>>n;
		int a[n];
		int i = 0;
		
		//Get the numbers 
		cout<<endl<<"Enter the numbers: "<<endl;
		for(i = 0; i<n; i++)
			cin>>a[i];
		
		//Sort the numbers
		for(i = 0; i<n; i++)
		{
			for(int j = 0; j <n; j++)
			{
				if(a[i] < a[j])
				{
					 int temp = a[i];
					 a[i] = a[j];
					 a[j] = temp;
				}
			}
		}
	cout<<"Numbers sorted in ascending order are : "<<endl;
	for(i = 0; i<n; i++)
		cout<<a[i]<<endl;
	cout<<"Second last number from the list : "<<a[n-2]<<endl;
	return 0;
}
