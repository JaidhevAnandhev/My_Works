#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
		// Entering the distance
		int distance;
		cout<<"Enter the distance in kilometre :"<<endl;
		cin>>distance;
		
		// Validate the distance
		if (distance <= 0)
		{
			cout<<"Invalid input"<<endl;
			return 0;
		}
			
		// Validate the time
		int time;
		cout<<"Enter the time in hours:"<<endl;
		cin>>time;
		if (time < 1)
		{
				cout<<"Invalid time"<<endl;
				return 0;
		}
		
		// Validate the speed
		int speed = distance / time;
		//cout<<"Speed is :"<<speed<<" km/hr"<<endl;
		if(speed <= 30)
		{
				cout<<"You can drive the car at normal speed."<<endl;
				return 0;
		}
		else 
		{
				int high_speed;
				high_speed = speed - 30;
				cout<<"You need to increase the speed of the vehicle to "<<high_speed<<" km/hr."<<endl;
				cout<<"But beware of high speed travelling."<<endl;
		}
		return 0;		
}
