#include<iostream>
#include<cstring>
#include<cmath>
#include<sstream>
using namespace std;
int main()
{
	// Get the product code of  6 to 8 characters length and only numbers no characters
	int prdt_code;
	cout<<"Enter the product code  :"<<endl;
	cin>>prdt_code;
	
	cout<<"You have the product code "<<prdt_code<<" of length " << round(log10(prdt_code) +1)<< endl;
	
	// Validate the product code 6 to 8 characters length and only numbers no characters.	
	int prdt_code_len = round(log10(prdt_code) +1 );
	if(prdt_code_len < 6 || prdt_code_len > 9 )
	{
		cout<<"Your product code is invalid."<<endl;
		return 0;
	}
	
	// Validate MRP from the product code(last four digits)
	
	
	// Converting int to str part 1
	string str;
	stringstream ss;
	ss << prdt_code;
	ss >> str;

	cout<<"Product code is: "<<prdt_code<<endl;
	cout<<"Product code to string value is :"<<str<<endl;
	
		 string mrp_str = str.substr(str.length()-4); // for any no of characters
		 cout<<endl<<"MRP is : "<<mrp_str<<endl;
		
	// Converting str to int value part 1
	stringstream convert(mrp_str);
	int mrp_int = 0;
	convert >> mrp_int;
	cout<<"MRP Value in Integer type : "<<mrp_int<<endl;
	
		
	// Validate the discount value for specific MRP Value
	int offer_price = 0;
	if(0 < mrp_int && mrp_int< 10)
	{
			offer_price = mrp_int;
	}
	else if(10 < mrp_int && mrp_int < 51)
	{
			offer_price = mrp_int-5;
	}
	else if(50 < mrp_int && mrp_int < 501)
	{
		offer_price = mrp_int-15;
	}
	else if(500 < mrp_int && mrp_int < 5001)
	{
			offer_price = mrp_int-105;
	}
	else if(5000 < mrp_int)
	{
			offer_price = mrp_int-1005;		
	} 
	else
			cout<<"Enter a valid product code.";
	
	cout<<"Offer Price : "<<offer_price<<endl;
	
	return 0;	
}
