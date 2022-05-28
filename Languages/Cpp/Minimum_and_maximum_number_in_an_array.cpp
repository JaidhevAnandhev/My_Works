#include<iostream>
using namespace std;
int main()
{
	// Get the array size from the user
	int size = 0;
	cout<<"Enter the size of the array: ";
	cin>>size;
	
	// Validate the size whether it is less than or equal to 0.
	if(size <= 0)
	{	
		cout<<"Invalid size"<<endl;
		return 0;
	}
	
	//Get the elements from the user
	int elements[size];
	int i = 0;
	cout<<"Enter the elements: "<<endl;
	for(i = 0; i<size; i++)
		cin>>elements[i];
	
	// Find the minimum and maximum number from the array
	int min = elements[0];
	int max = elements[0];
	for(i = 0; i<size; i++)
	{
		// For Minimum
		if(min > elements[i])
			min = elements[i];
		// For Maximum
		else if(max < elements[i])
			max = elements[i];
	}
	//End of for loop
	
	//Display the Minimum and Maximum of the elments in an array
	cout<<"Minimum number in the array: "<<min<<endl;
	cout<<"Maximum number in the array: "<<max<<endl;
	
	return 0;	
}
