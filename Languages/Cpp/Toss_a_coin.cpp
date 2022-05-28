#include<iostream>
using namespace std;
int main()
{
		// Get input from the user
		string toss;
		cout<<"Enter a pattern :"<<endl;
		cin>>toss;
	
		// Validate that the input contains at least two characters
		if(toss.length() < 2)
		{
				cout<<"Invalid input.."<<endl;
				return 0;
		}
		
		for(int i = 0; i < toss.length(); i++)
		{
				if(toss[i] != 'H' && toss[i] != 'h' && toss[i] != 'T' && toss[i] != 't')
				{
					cout<<toss<<" is an invalid input"<<endl;
					return 0;
				}
		}
		
		
		for(int i = 0; i < toss.length()-1; i++)
		{
			if(toss[i] == toss[i+1])
					cout<<" Team will Fail"<<endl;
			else
				cout<<"Team will win"<<endl;
		}
		
		
		
		return 0;
}
