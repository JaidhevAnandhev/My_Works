#include<iostream>
using namespace std;
int main()
{
	int battery_capacity = 0;
	cout<<"Enter the battery capacity: "<<endl;
	cin>>battery_capacity;	
	int speed = 0;
	cout<<"Enter the charging speed: "<<endl;
	cin>>speed;	
	
	// To find the time of charging	
	int time = (battery_capacity / speed )*1.2;
	cout<<"Charging time in minutes: "<<time<<endl;
	return 0;
}



