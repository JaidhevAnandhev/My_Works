#include<iostream>
using namespace std;
int main()
{
	string str;
	cout<<"Enter a word: ";
	cin>>str;
	int count_lc = 0;
	int count_uc = 0;
	int i = 0;
	for(i = 0; i<str.length(); i++)
	{
		if(str[i] >= 97 && str[i] <= 122 )
			count_lc++;
		else if(str[i] >= 65 && str[i] <= 90)
			count_uc++;
	}
	cout<<"No of lowercase letters : "<<count_lc<<endl;
	cout<<"No of Uppercase letters : "<<count_uc<<endl;
	int prdt = count_lc * count_uc;
	cout<<"Product is: "<<prdt<<endl;
	return 0;
}
