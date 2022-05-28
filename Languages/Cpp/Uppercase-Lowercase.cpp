#include<iostream>
using namespace std;
int main()
{
	// Get the input word with a mixture of capital and small letters from the user
	string word;
	cout<<"Enter a word with a mixture of capital and small letters : "<<endl;
	cin>>word;
	
	int i = 0;
	for(i = 0; i<word.length(); i++)
	{
		// Validate the word that contains only alphabets
		if( ! ( (word[i]>='a' && word[i] <='z') || (word[i] >='A' && word[i] <='Z') ) )
		{
			cout<<"Invalid Word. "<<endl;
			return 0;		
		}	
	}
	
	
	int uc = 0, lc = 0;
	
	// Check if the word contains both uppercase and lowercase
	for(i = 0; i<word.length(); i++)
	{
		if(isupper(word[i]))
			uc++;
		else if(islower(word[i]))
			lc++;
	}

	cout<<"No of Uppercase letters : "<<uc<<endl;
	cout<<"No of Lowercase letters : "<<lc<<endl;
	cout<<"Uppercase - lowercase : "<<uc<<" - "<<lc<<" = "<<(uc-lc)<<endl;
	
	return 0;
}
