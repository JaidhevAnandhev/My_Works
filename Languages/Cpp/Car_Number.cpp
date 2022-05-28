#include<iostream>
#include<sstream>
using namespace std;
int main()
{
		int car_number = 0;
		cout<<"Enter a four digit car number : ";
		cin>>car_number;
		if(car_number  < 1000 || car_number > 9999)
		{
				cout<<"Car number is invalid."<<endl;
				return 0;
		}
		
		int last_three_number = car_number % 1000;
		if(last_three_number % 8 == 0 || last_three_number % 13 == 0 )
			cout<<car_number<<" is an unlucky number."<<endl;
		else
			cout<<car_number<<" is a lucky number."<<endl;
	return 0;
}
