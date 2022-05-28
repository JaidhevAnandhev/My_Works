#include<iostream>
using namespace std;
int main()
{
		string name;
		cout<<"Enter the name : ";
		cin>>name;
		int i = 0;
		string rev_name;
		int index = 0;
		bool isNotPalindrome = false;
		for(i = name.length() - 1; i >= 0; i--)
		{
			rev_name  += name[i];
			//index++;
		}
		cout<<"Reversed name is : "<<rev_name<<endl;
		for(i = 0; i < name.length(); i++)
		{
				if(rev_name[i] != name[i])
				{
					isNotPalindrome = true;
					break;
				}
		}
		if(isNotPalindrome)
			cout<<name<<" is not a palindrome."<<endl;
		else
			cout<<name<<" is a palindrome."<<endl;
	return 0;
}
