#include<iostream.h>
int main()
{
	char ch;
	cout<<"Enter a character: ";
	cin>>ch;
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
		cout<<endl<<ch<<" is an Alphabet";
	else
		cout<<endl<<ch<<" is'nt an Alphabet";
	cout<<endl;
	return 0;
}