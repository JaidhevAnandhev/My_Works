#include<iostream>
using namespace std;
int main()
{
	string word;
	cout<<"Enter the word : ";
	cin>>word;
	string search_word;
	cout<<endl<<"Enter the word to search : ";
	cin>>search_word;
	int i = 0;
	int count = 0;
	for(i = 0; i < word.length(); i++)
	{
		string str_temp = word.substr(i, search_word.length());
		if(search_word == str_temp)
			count++;
	}
	if(count != 0)
		cout<<search_word<<" is found in the string "<<word<<" repeated  "<<count<<" times."<<endl;
	return 0;
}
