#include<iostream>
using namespace std;
int main()
{
	float distance = 0;
	cout<<"Enter the distance: "<<endl;
	cin>>distance;
	if(distance < 1)
	{
		cout<<"Invalid distance."<<endl;
		return 0;
	}
	else
	{	
		float distance_in_metre = distance * 1000;
		float div = distance_in_metre / 10;
		float time = div / 60;
		cout<<"For the distance : "<<distance<<" ,estimated time delivery is : "<<time<<endl;
	}
	return 0;
}
