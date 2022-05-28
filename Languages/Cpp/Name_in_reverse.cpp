#include<iostream>
using namespace std;
int main()
{
		string name;
		cout<<"Enter the name : ";
		cin>>name;
		int i = 0;
		
		cout<<endl<<"Reversed name : ";
		for(i = name.length()-1; i>=0; i--)
			cout<<name[i];
		
	return 0;
}
