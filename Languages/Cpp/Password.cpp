#include<iostream>
using namespace std;
int main()
{
		string password;
		cout<<"Enter the password: "<<endl;
		cin>>password;
		if(password == "Jaidhev" || password == "jaidhev" || password == "JAIDHEV")
		{
			cout<<"Password given is correct."<<endl;
		}
		else
		{
			cout<<"Password given is incorrect."<<endl;
			return 0;
		}
}
