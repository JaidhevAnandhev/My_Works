#include<iostream>
using namespace std;
int main()
{
	double length, breadth, rainfall_level ;
	cout<<"Enter the length of the roof : ";
	cin>>length;
	if(length <= 0)
	{
		cout<<"Invalid length."<<endl;
		return 0;
	}
	cout<<"Enter the breadth of the roof : ";
	cin>>breadth;
	if(breadth <= 0)
	{
			cout<<"Invalid breadth. "<<endl;
			return 0;
	}
	cout<<"Enter the rainfall level : ";
	cin>>rainfall_level;
	if(rainfall_level <= 0)
	{
		cout<<"Invalid rainfall level. "<<endl;
		return 0;	
	}
	double litres = 0;
	litres = (length * breadth) * (rainfall_level * 10);
	cout<<"Litres : "<<litres<<endl;
	return 0;
}
