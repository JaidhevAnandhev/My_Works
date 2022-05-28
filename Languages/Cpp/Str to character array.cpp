#include<iostream>
using namespace std;
int main()
{
	string word;
	cout<<"Word: ";
	cin>>word;
	
	int i = 0;
	for(i = 0; i<word.length(); i++)
	{
		if(!(word[i] >= 'A' && word[i] <= 'Z') || (word[i] >= 'a' && word[i] <= 'z'))
		{
			cout<<"Invalid Word."<<endl;
			return 0;
		}		
	}	
	
	for(i = 0; i<word.length(); i++)
	{
			cout<<"String to Char Array No: "<<i+1<<" "<<word[i]<<endl;
	}
	//Since string is a character array we can print each character in the array
	return 0;
}
