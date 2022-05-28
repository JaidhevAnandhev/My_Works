#include<iostream.h>
#include<conio.h>
int main()
{
	int num;
	cout<<"Guess a number  :  ";
	cin>>num;
	if(num>10 && num<100)
		cout<<"\nWhat a True guess!";
	else
		cout<<"\nOOPS!";
	cout<<endl;
	return 0;
}