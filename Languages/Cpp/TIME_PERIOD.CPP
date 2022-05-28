#include<iostream>
using namespace std;
struct Time
{
	int seconds;
	int minutes;
	int hours;
};
void computeTimeDifference(struct Time , struct Time , struct Time*);
int main()
{
	struct Time t1 , t2 , difference;

	cout<<"Enter start time :"<<endl;
	cout<<"Enter hours , minutes and seconds respectively :"<<endl;
	cin>>t1.hours>>t1.minutes>>t1.seconds;

	cout<<"Enter stop time :"<<endl;
	cout<<"Enter hours , minutes and seconds respectively :"<<endl;
	cin>>t2.hours>>t2.minutes>>t2.seconds;

	computeTimeDifference(t1 , t2 , &difference);

	cout<<endl<<"TIME DIISRENCE"<<t1.hours<<" : "<<t1.minutes<<" : "<<t1.seconds;
	cout<<" - "<<t2.hours<<" : "<<t2.minutes<<" : "<<t2.seconds;
	cout<<" =  "<<difference.hours<<" : "<<difference.minutes<<" : "<<difference.seconds;
	return 0;
}

void computeTimeDifference(struct Time t1 , struct Time t2 , struct Time *diiference)
{
	if(t2.seconds>t1.seconds)
	{
		--t1.minutes;
		t1.seconds+=60;
	}
	difference -> seconds =t1.seconds - t2.seconds;
	if(t2.minutes > t1.minutes)
	{
		--t1.hours;
		t1.hours+=60;
	}
	difference->minutes = t1.minutes - t2.minutes;
	diiference->hours = t1.hours - t2.hours;
}
