#include<iostream>
using namespace std;
int main()
{
		string car_number;
		cout<<"Enter the car number : "<<endl;
		cin>>car_number;
		if(car_number.length() != 10 )
		{	
			cout<<"Invalid car number."<<endl;
			return 0;
		}
		 
		string state_code = car_number.substr(0,2);
		cout<<"State code :"<<state_code<<endl;
		
		if(state_code == "TN" || state_code == "tn" )
		{
			cout<<"Your car is from Tamilnadu."<<endl;
			cout<<"Park your car at 1st floor."<<endl;
			cout<<"Have a nice day :)"<<endl;
		}
		
		else if(state_code == "KL" || state_code == "kl" )
		{
			cout<<"Your car is from Kerala."<<endl;
			cout<<"Park your car at 2nd floor."<<endl;
			cout<<"Have a nice day :)"<<endl;
		}
		
		else if(state_code == "AP" || state_code == "ap" )
		{
			cout<<"Your car is from Andhra Pradesh."<<endl;
			cout<<"Park your car at 3rd floor."<<endl;
			cout<<"Have a nice day :)"<<endl;
		}
		
		else if(state_code == "MP" || state_code == "mp" )
		{
			cout<<"Your car is from Madhya Pradesh."<<endl;
			cout<<"Park your car at 4th floor."<<endl;
			cout<<"Have a nice day :)"<<endl;
		}
		
		else if(state_code == "DL" || state_code == "dl" )
		{
			cout<<"Your car is from Delhi."<<endl;
			cout<<"Park your car at 5th floor."<<endl;
			cout<<"Have a nice day :)"<<endl;
		}
		else
		{
			cout<<"Invalid State Code."<<endl;
			return 0;
		}
		
	return 0;
}
