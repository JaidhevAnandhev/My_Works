#include<iostream>
#include<sstream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter the number of input:"<<endl;
	cin>>size;
	
	int math_array[size];
	int i = 0;
	int j = 0;
	for(i = 0; i<size; i++)
	{
			cout<<"Enter the numbers:"<<endl;
			cin>>math_array[i];
	}
	cout<<"You input numbers are : "<<endl;
	for(i = 0; i < size; i++)
	{
			cout<<math_array[i]<<" , "<<endl;
			if(math_array < 0 )
			{	
				cout<<math_array[i]<<" is a negative number."<<endl;
				return 0;
			}			
	}
	int total_sum_array[size];
	
	for(i = 0; i<size; i++)
	{
			string num_to_str;
			stringstream ss;
			ss << math_array[i];
			ss >> num_to_str;
			
			cout<<"Number is:"<<math_array[i]<<" and the length is :"<<num_to_str.length()<<endl;
	
		int sum_odd_even = 0;
		if(num_to_str.length() % 2 == 0)
		{
				cout<<num_to_str.length()<<" is an even number."<<endl;
			
				for( j = 0; j<num_to_str.length(); j++)
				{
						cout<<j+1<<" position contains :"<<num_to_str[j]<<endl;
				}
				cout<<"Printing after convert from char to int :"<<endl;
				for(j = 1; j < num_to_str.length(); j+=2)
				{
						cout<<(num_to_str[j] - 48)<<"  ";
						sum_odd_even += (num_to_str[j] - 48);
				}
				cout<<endl<<"Sum of Even positions :"<<sum_odd_even<<endl;

		}
		else
		{
				cout<<num_to_str.length()<<" is an Odd number."<<endl;
				
				for(j = 0; j<num_to_str.length(); j++)
				{
						cout<<j+1<<" position contains :"<<num_to_str[j]<<endl;
				}
				cout<<"Printing after convert from char to int :";
				for(j = 0; j < num_to_str.length(); j+=2)
				{
						cout<<(num_to_str[j] - 48)<<"  ";
						sum_odd_even += (num_to_str[j] - 48);
				}	
				cout<<endl<<"Sum of Odd position is :"<<sum_odd_even<<endl;	
		}
		
		total_sum_array[i] = sum_odd_even;
		
	}//end of for loop
	
	
	int total = 0;
	for(i = 0; i<size; i++)
	{
		cout<<total_sum_array[i]<<" ";
		total += total_sum_array[i];
	}
	
	cout<<"Total Sum is : "<<total<<endl;
	return 0;
	
}
