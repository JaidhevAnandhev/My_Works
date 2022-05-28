#include<iostream>
#include<sstream>
using namespace std;
int main()
{
	string code;
	cout<<"Enter the code : ";
	cin>>code;
	if(code.length() > 5 && code.length() > 9)
	{
		cout<<code<<" and it's length "<<code.length()<<" is an Invalid length. "<<endl;
		return 0;
	}
	
	stringstream convert(code);
	int code_no = 0;
	convert >> code_no;
	cout<<"After converting to integer, value is : "<<code_no<<endl;
	
	int price = 0;
	int offer_price = 0;
	price = code_no % 1000;
	cout<<price<<endl;
	
	if(price > 0 && price <= 10)
		offer_price = price;
	else if(price >= 11 && price <= 50)
		offer_price = price-5;
	else if(price >= 51 && price <= 500)
		offer_price = price-15;
	else if(price >= 501 && price <= 5000)
		offer_price = price-105;
	else if(price >= 5000)
		offer_price = price-1005;
	else
		{
			cout<<"Invalid Price."<<endl;
			return 0;
		}
	cout<<"Price is : "<<price<<" and the offer price is : "<<offer_price<<endl;
	return 0;
}
