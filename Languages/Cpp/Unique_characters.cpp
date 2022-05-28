#include<iostream>
using namespace std;
int main()
{
		string word = "enesneba";
		string i_cpy = word;
		int i = 0;
		
		for(i = 0; i<word.length()-1; i++)
		{
			// Compare a character eith all other characters
			for(int j = i+1; j<word.length(); j++)
			{				
				if(word[i] == word[j])
				{	
					cout<<i_cpy<<" before deletion."<<endl;
					
					// Iterate the array in reverse order and erase the duplicate character from the copy string
					for(int k = i_cpy.length()-1; k>=0; k--)
					{
						if(word[j] == i_cpy[k])
						{	
							cout<<"Character Before Erase : "<<i_cpy.substr(k, 1)<<endl;
							i_cpy.erase(k, 1);	
						}
								
					}
				}
			}
		}
	cout<<i_cpy<<" is the unique characters of the word : "<<word<<endl;
	return 0;
}
