#include<iostream>
using namespace std;
int main()
{	
	int no_of_strings = 0;
	cout<<"Enter the number of strings : "<<endl;
	cin>>no_of_strings;
	int i = 0;
	string first_name, last_name, result; 
	for(i = 0; i < no_of_strings; i++)
	{
		cout<<"Enter first name : "<<endl;
		cin>>first_name;
		cout<<"Enter Last name : "<<endl;
		cin>>last_name;
		result = first_name + last_name;
		cout<<"After concatenating two strings : "<<result<<endl;
	}
	return 0;
}


