#include<iostream.h>
int main()
{
	int yr;
	cout<<"Enter a year :";
	cin>>yr;
	if((yr%4==0) && (yr%100!=0))
		cout<<"\nIt is a leap year .";
	else if(yr%400==0)
		cout<<"\nIt is a leap year .";
	else
		cout<<"\nIt is not a leap year";
	cout<<endl;
	return 0;
}