#include<iostream>
#include<sstream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter the array size : "<<endl;
	cin>>size;
	if(size <= 0)
	{
		cout<<"Invalid array size."<<endl;
		return 0;
	}
	int math_array[size];
	int i = 0;
	int j = 0;
	cout<<"Enter the numbers : "<<endl;
	for(i = 0; i < size; i++)
	{
		cin>>math_array[i];
	}
	int total_array[size];
	for(i = 0; i<size; i++)
	{
			string math_array_to_str;
			stringstream ss;
			ss << math_array[i];
			ss >> math_array_to_str;
			cout<<"Math array to string : "<<math_array_to_str<<endl;
			
			int s_o_e = 0;
			
			// Condition for odd number
			if(math_array_to_str.length() % 2 != 0)
			{
				for(j = 0; j < math_array_to_str.length(); j += 2)
						s_o_e += (math_array_to_str[j] - 48);
						
				// Get the total of s_o_e
				total_array[i] = s_o_e;
			}
			else
			{
				for(j = 1; j < math_array_to_str.length(); j += 2)
					s_o_e += (math_array_to_str[j] - 48);
						
				// Get the total of s_o_e
				total_array[i] = s_o_e;
			}
	}
	
	// Calculate th total of odd and even numbers
	int Overall_total = 0;
	for(i = 0; i<size; i++)
		Overall_total += total_array[i];
	cout<<"Overall Total : "<<Overall_total<<endl;
return 0;	
	
}
