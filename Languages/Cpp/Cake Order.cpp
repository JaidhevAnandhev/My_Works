#include<iostream>
using namespace std;
int main()
{
		string name;
		cout<<"Enter the name of the customer :"<<endl;
		cin>>name;
		string cake_type;
		cout<<"Cake Menu :)"<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<"Discount for each cake type...."<<endl;
		cout<<"1. Black Forest(1 Kg) = 10 % "<<endl;
		cout<<"2. White Forest(1 Kg) = 11 % "<<endl;
		cout<<"3. Eclairs Cake(1.5 Kg) = 8 % "<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<"Enter the cake type :"<<endl;
		cin>>cake_type;
		int price = 0;
		int discount = 0;
		int total = 0;
		
		cout<<"Enter the discount :"<<endl;
		cin>>discount;
		if(cake_type == "Black_Forest" || cake_type == "black_forest")
		{
				price = 600;
				total = price - (price * discount / 100);
				cout<<"You have Ordered :"<<cake_type<<"Price : "<<price<<endl;
				cout<<"Discount Price : "<<total<<endl;
				
		}
		else if(cake_type == "White_Forest" || cake_type == "white_forest")
		{
			price = 620;
			total = price - (price * discount / 100);	
			cout<<"You have Ordered :"<<cake_type<<"Price : "<<price<<endl;
			cout<<"Discount Price : "<<total<<endl;
		}
		else if(cake_type == "Eclairs" || cake_type == "eclairs")
		{
			price = 550;
			total = price - (price * discount / 100);	
			cout<<"You have Ordered :"<<cake_type<<" Price : "<<price<<endl;
			cout<<"Discount Price : "<<total<<endl;
		}
		else
		{
			cout<<"Invalid Cake Type."<<endl;
			return 0;
		}
		
		cout<<"Customer Bill ..... :)"<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<"1. Customer Name : "<<name<<endl;
		cout<<"2. Cake Type : "<<cake_type<<endl;
		cout<<"3. Actual Price of the cake is : "<<price<<endl;
		cout<<"Price after the discount :"<<total<<endl;
		cout<<"Thanks for Purchasing .Come Again Later :)"<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		
	return 0;
		
}
