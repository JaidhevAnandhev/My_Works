#include<iostream>
using namespace std;
int main()
{
	string word;
	cout<<"Enter the word : "<<endl;
	cin>>word;
	string removed_word;
	int i = 0;
	if(word.length() >= 3 || word.length() <= 8)
	{
		for(i = 0; i < word.length(); i++)
		{	
			if( (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') &&
				(word[i+1] == 'a' || word[i+1] == 'e' || word[i+1] == 'i' || word[i+1] == 'o' || word[i+1] == 'u') )
			{
				cout<<"Vowel Pair Found: "<<word[i]<<","<<word[i+1]<<endl;
				i++;
			}
			else
			{
				removed_word += word[i];
			}
		}
		cout<<"Given word : "<<word<<endl<<"Removed vowels from the given word : "<<removed_word<<endl;
		
	}
	else
	{
			if(word.length < 3)
				cout<<"Word length is too small."<<endl;
			
	}
	return 0;
}













