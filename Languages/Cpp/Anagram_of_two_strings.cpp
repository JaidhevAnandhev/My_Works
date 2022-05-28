#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string word_1;
	cout<<"Enter word 1 : "<<endl;
	cin>>word_1;
	string word_2;
	cout<<"Enter word 2: "<<endl;
	cin>>word_2;
	if(word_1.length() != word_2.length())
	{	
		cout<<"This word is not an anagram."<<endl;
		return 0;
	}
	sort(word_1.begin(),word_1.end());
	cout<<"Sorted String "<<endl;
	cout<<word_1<<endl;
	
	sort(word_2.begin(),word_2.end());
	cout<<"Sorted String "<<endl;
	cout<<word_2<<endl;
	
	if(word_1 == word_2)
		cout<<"They are anagram of each other."<<endl;
	else
	{
		cout<<"The given words are not anagram of each other."<<endl;
		return 0;
	}
		
	return 0;
}
