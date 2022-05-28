#include<iostream>
using namespace std;
int main()
{
	string word;
	cout<<"Enter the word : "<<endl;
	cin>>word;
	int i = 0;
	for(i = 0; i<word.length(); i++)
	{
		if( ! ( (word[i]>='a' && word[i] <='z') || (word[i] >='A' && word[i] <='Z') ) )
		{
			cout<<"Invalid Word. "<<endl;
			return 0;		
		}
	}
	for(i = 0; i<word.length(); i++)
	{
			
		// Check the even postion and convert to lower case
		if((i+1) % 2 == 0)
			word[i] = tolower(word[i]);
		else  // Check the Odd postion and convert to upper case
			word[i] = toupper(word[i]);
	}
	
	cout<<"After coversion of odd positions to uppercase : "<<word<<endl;
	return 0;
}
