#include<iostream>
using namespace std;
int main()
{
	// Get the input name from the user
	string name;
	cout<<"Enter the name of the child : "<<endl;
	cin>>name;
	int i = 0;
	
	// Validate the input contains only characters
	for(i = 0; i<name.length(); i++)
	{
		if(!((name[i] >= 'a' && name[i] <='z') || (name[i] >= 'A' && name[i] <='Z')))
		{
			cout<<"Invalid name."<<endl;
			return 0;
		}
	}
	
	// Check the length of the name is sufficient to generate secret code
	int length = name.length();
	if(length > 4)
	{
		
		// Get the input birthday date 
		int  birth_date;
		cout<<"Enter your birthday date only : ";
		cin>>birth_date;
		
		// Validate the birthday date between 1 and 31
		if(birth_date < 1 && birth_date > 31)
		{
				cout<<"Invalid birth date."<<endl;
				return 0;
		}
		
		// Generate the secret key/code
		cout<<"Your secret code is: "<<name.substr(0,4)<<"@"<<birth_date<<endl;
	}
	else
	{
		cout<<"Length of the name "<<length<<" is insufficient to generate secret code."<<endl;
		return 0;
	}
	return 0;	
}
