#include<iostream>
#include<sstream>
#include<cstring>
using namespace std;
int main()
{
		int math_array = 975647;
		string number_in_math_array_to_string;
		stringstream ss;
		ss << math_array;
		ss >> number_in_math_array_to_string;
		
		int sum_even_nos = 0;
		int j;
		
		for(j = 0; j < number_in_math_array_to_string.length(); j++)
		{
			cout<<j+1<<" position contains number : "<<number_in_math_array_to_string[j]<<endl;
		}
		
		cout << "Print nos "<< endl;
		for(j = 1; j < number_in_math_array_to_string.length(); j+=2)
		{
			
				// Convert character into integer 
				cout<<(number_in_math_array_to_string[j] - 48)<<" ";
				    
				
				// Add the even numbers
				sum_even_nos += (number_in_math_array_to_string[j] - 48);
				
		}
		cout<<endl<<"Sum of even positions :"<<sum_even_nos<<endl;
		
	
	return 0;	
}
