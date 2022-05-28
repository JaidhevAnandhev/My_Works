#include<iostream>
#include<sstream>
#include<cstring>
using namespace std;
int main()
{	
	// Get the number of input size
	int size;
	cout<<"Enter the number of inputs :"<<endl;
	cin>>size;
	
	// Get the input number 
	int math_array[size];
	int i = 0;
	int j = 0;
	for(i = 0; i < size; i++)
	{
		cout<<"Enter the number :"<<endl;
		cin>>math_array[i];
	}
	
	cout<<"Your input numbers are : ";
	// Validate the input numbers are positive
	for(i = 0; i < size; i++)
	{
		cout<<math_array[i]<<" , ";
		if(math_array[i] < 0)
		{
			cout<<math_array[i]<<" is a negative number."<<endl;
			return 0;
		}
	}
	
	int sum_total_array[size];
	
	for(i = 0; i < size; i++)
	{
		// Check the length of the number in the array
		string number_in_math_array_to_string;
		stringstream ss;
		ss << math_array[i];
		ss >> number_in_math_array_to_string;
		
		cout<<"The number is : "<<math_array[i]<<" and its size is : "<<number_in_math_array_to_string.length()<<endl;
		
		
		int sum_Odd_even = 0;
		// Validate the total size of the number is even or odd 
		// If it is even sum all the even positions from  the number
		// If it is odd sum all the odd positions from  the number
		if(number_in_math_array_to_string.length() % 2 == 0)
		{
			cout<<number_in_math_array_to_string.length()<<" is an Even number."<<endl;
			
			// Sum all the even positions from  the number
			cout<<"Even positions number : "<<number_in_math_array_to_string<<endl;
			
			for(j = 0; j < number_in_math_array_to_string.length(); j++)
			{
					cout<<j+1<<" position contains number : "<<number_in_math_array_to_string[j]<<endl;
					
			}
			cout << "Print nos after converting character to integer : "<< endl;
			for(j = 1; j < number_in_math_array_to_string.length(); j+=2)
			{
					// Convert character to integer
					cout<<(number_in_math_array_to_string[j] - 48)<<" ";
					
					// Add the even numbers
					sum_Odd_even += (number_in_math_array_to_string[j] - 48);
			}
			cout<<endl<<"Sum of even positions :"<<sum_Odd_even<<endl;
		}
		else
		{
			cout<<number_in_math_array_to_string.length()<<" is an Odd number."<<endl;
			
			// Sum all the Odd positions from  the number
			cout<<"Odd positions number : "<<number_in_math_array_to_string<<endl;
			
			for(j = 0; j < number_in_math_array_to_string.length(); j++)
			{
					cout<<j+1<<" position contains number : "<<number_in_math_array_to_string[j]<<endl;
					
			}
			cout << "Print nos after converting character to integer : "<< endl;
			for(j = 0; j < number_in_math_array_to_string.length(); j+=2)
			{
					// Convert character to integer
					cout<<(number_in_math_array_to_string[j] - 48)<<" ";
					
					// Add the Odd numbers
					sum_Odd_even += (number_in_math_array_to_string[j] - 48);
					
			}
			cout<<endl<<"Sum of Odd positions :"<<sum_Odd_even<<endl;
			
		}
			
		// Save the sum of positions either even or odd into a new array for final summation
		sum_total_array[i]	= sum_Odd_even;	
		
	} //  end of for loop

	// Sum the sum of the postions
	int total = 0;
	for(i = 0; i < size; i++)
	{
			cout<< sum_total_array[i] << " , ";
		total += sum_total_array[i];	
	}
	cout<<"Total Sum is : "<<total<<endl; 

	return 0;
	
}
