#include<iostream>
#include<cstring>
#include<sstream>
using namespace std;
int main()
{	
		string input;
		cout<<"Eg : Type 01/09/2021 as 01092021"<<endl;
		cout<<"Enter the input : ";
		cin>>input;
		//int n = input.length();
		for(int i = 0; i<input.length(); i++)
		{
				if(!(input.length() >=0 && input.length() <= 9))
				{
						cout<<"Input is not valid."<<endl;
						return 0;
				}
				if(input.length()!=8)
				{	
					cout<<"Enter the valid date. "<<endl;
					return 0;
				}
		}
		string date = input.substr(0,2);
		string month = input.substr(2,2);
		string year_1 = input.substr(4,1);
		string year_2 = input.substr(5,1);
		string year_3 = input.substr(6,1);
		string year_4 = input.substr(7,1);
		
		// Converting date to integer
		stringstream convert(date);
		int date_in_int = 0;
		convert >> date_in_int;
		convert.clear();
		
		// Converting month to integer
		convert.str(month);
		//stringstream convert(month);
		int month_in_int = 0;
		convert >> month_in_int;
		convert.clear();
		
		// Converting year to integer
		convert.str(year_1);
		//stringstream convert(year);
		int year_1_in_int = 0;
		convert >> year_1_in_int;
		convert.clear();
		
		// Converting year to integer
		convert.str(year_2);
		//stringstream convert(year);
		int year_2_in_int = 0;
		convert >> year_2_in_int;
		convert.clear();
		
		// Converting year to integer
		convert.str(year_3);
		//stringstream convert(year);
		int year_3_in_int = 0;
		convert >> year_3_in_int;
		convert.clear();
		
		// Converting year to integer
		convert.str(year_4);
		//stringstream convert(year);
		int year_4_in_int = 0;
		convert >> year_4_in_int;
		convert.clear();
		
		// Displaying the output
		cout<<"Entering the DMY from the given input."<<endl;
		cout<<"Date : "<<date<<endl;
		if(date_in_int <= 0 || date_in_int >=31 )
		{
				cout<<"Invalid Date."<<endl;
				return 0;
		}
		cout<<"Month : "<<month<<endl;
		if(month_in_int <= 1 || month_in_int >= 12)
		{	
			cout<<"Invalid Month."<<endl;
			return 0;
		}
		
		cout<<"Year : "<<input.substr(4,4)<<endl;
		if(year_1_in_int == 2 && year_2_in_int >= 0 &&)
		{
				cout<<"Year is "<<year_1_in_int<<year_2_in_int<<endl;
				return 0;
		}
		else
		{
				cout<<"Invalid Year."<<endl;
				return 0;
		}
		
		return 0;
}
