#include<iostream>
using namespace std;
int main()
{
		int rupees = 0;
		cout<<"Enter the rupees : "<<endl;
		cin>>rupees;
		if(rupees < 100)
		{
			cout<<"Invalid amount."<<endl;
			return 0;
		}
		float liter = 0;
		cout<<"Enter the liter : "<<endl;
		cin>>liter;
		if(liter <= 0)
		{
				cout<<"Invalid liter."<<endl;
				return 0;
		}
		int petrol = rupees / liter;
		cout<<"Quantity of the fuel : "<<petrol<<"l."<<endl;
		return 0;
}
