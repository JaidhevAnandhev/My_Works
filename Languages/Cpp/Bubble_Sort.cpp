#include<iostream>
using namespace std;
int main()
{
	// Get the array size from the user
	int array_size = 0;
	cout<<"Enter the array size: ";
	cin>>array_size;
	
	// Get the elements
	int numbers[array_size];
	int i = 0, j = 0;
	
	int temp;
	cout<<"Enter the elements: "<<endl;
	for(i = 0; i<array_size; i++)
		cin>>numbers[i];
	
	// Condition for sorting
	for(i = 0; i < array_size; i++)
	{
		for(j = 0; j < (array_size-1); j++)
		{
			if(numbers[j] > numbers[j+1])
			{
				temp = numbers[j];
				numbers[j] = numbers[j+1];
				numbers[j+1] = temp;
				
			}
		}
	}
	
	// Display the sorted array
	cout<<"After sorting the array: "<<endl;
	for(i = 0; i<array_size; i++)
		cout<<numbers[i]<<" "<<endl;	
	
	return 0;
}
