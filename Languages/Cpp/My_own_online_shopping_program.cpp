#include<iostream>
#include<cstring>
using namespace std;
int main()
{
		string cust_name, prdt_name;
		cout<<"Enter the customer name : "<<endl;
		cin>>cust_name;
		cout<<"Enter the product name : "<<endl;
		cin>>prdt_name;
		double price = 0;
		int prdt_discount = 0;
		int exchange_discount = 0;
		if(prdt_name == "Laptop" || prdt_name == "laptop")
		{
			prdt_discount = 20;	
			exchange_discount = 20;
		}
		else if(prdt_name == "Mobile" || prdt_name == "mobile")
		{
			prdt_discount = 15;	
			exchange_discount = 15;
		}
		else if(prdt_name == "Headset" || prdt_name == "headset")
		{
			prdt_discount = 10;	
			exchange_discount = 10;
		}
		else if(prdt_name == "T-Shirt" || prdt_name == "t-shirt" || prdt_name == "Tshirt" || prdt_name == "tshirt"  )
		{
			prdt_discount = 12;	
			exchange_discount = 12;
		}
		else
		{
				cout<<"Invalid product name ."<<endl;
				return 0;
		}
		
		cout<<"Enter the price of the product : "<<endl;
		cin>>price;
		if(price < 1500)
		{
				cout<<"Invalid price"<<endl;
				return 0;
		}
		
		double discount_price = 0;
		double exchange_price = 0;
		double total = 0;
		string exchange;
		cout<<"Do you want to exchange : "<<endl;
		cin>>exchange;
		
		if(exchange == "Yes" || exchange == "yes")
		{
				discount_price = price - (price * prdt_discount / 100);
				exchange_price = price * exchange_discount / 100;
				total = discount_price - exchange_price;
				cout<<"Total price after the exchange : "<<total<<endl;
				cout<<endl;
		}
		else if(exchange == "No" || exchange == "no")
		{
			total = price - (price * prdt_discount / 100);
			cout<<"Total price after discount : "<<total<<endl;
		}
		else
		{
				cout<<"Input is not valid ."<<endl;
				return 0;
		}
		
		cout<<"Displaying the bill. "<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<"1.Customer Name : "<<cust_name<<endl;
		cout<<endl;
		cout<<"2.Product Name : "<<prdt_name<<endl;
		cout<<endl;
		cout<<"3.Price of the product :"<<price<<endl;
		cout<<endl;
		cout<<"4.Whether the product is bought with exchange ? "<<" "<<exchange<<endl;
		cout<<endl;
		cout<<"5.Total Amount is: "<<total<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		return 0;
}
