#include<iostream.h>
int main()
{
	int km , hr , speed;
	cout<<"Enter the distance in Km:"<<endl;
	cin>>km;
	cout<<"Enter the time in hours:"<<endl;
	cin>>hr;
	if(km<=0)
	{
		cout<<"This is invlaid."<<endl;
		return 0;
	}
	//Logic:
	speed = km / hr;
	if(speed <= 50)
	{
		cout<<"You are driving at a normal speed Good"<<endl;
	}
	int slow = speed - 50;
	if(speed < 70)
	{
	cout<<" But , increase your speed of the vehicle to:"<<slow<<"km/hr."<<endl;
	}
	if(speed>80)
	{
		cout<<"Reduce your speed of the vehicle to 80"<<endl;
	}
	if(speed < 30)
	{
		cout<<"Increase the speed from 40 to 65."<<endl;
	}
	cout<<"Enter x to return."<<endl;
	cin>>speed;
	return 0;
}