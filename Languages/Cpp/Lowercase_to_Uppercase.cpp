#include<iostream>
using namespace std;
int main()
{
	string word;
	cout<<"Enter a word : "<<endl;
	cin>>word;
	string output;
	if(!(word >= "a" || word >= "z"))
	{	
		cout<<"Invalid name."<<endl;
		return 0;
	}
	else
	{	
		if(word.length() < 5 ||word.length() > 20)
		{
			cout<<"Invalid Length."<<endl;
			return 0;
		}	
		
		for(int i = 0; i<word.length()-1; i++)
		{
			if(i % 2 == 0)	
				output += toupper(word[i+1]);
			else
				output += word[i+1];
		}
	}
	
	cout<<"Output is :"<<output<<endl;
	return 0;
}
