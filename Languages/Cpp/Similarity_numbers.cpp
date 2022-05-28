#include<iostream>
#include<sstream>
using namespace std;
int main()
{
		int number = 0;
		cout<<"Enter some number that's quite repeating :"<<endl;
		cin>>number;
		if(number < 0)
		{	
			cout<<"Invalid number";
			return 0;
		}
		
		string num_to_str;
		stringstream ss;
		ss << number;
		ss >> num_to_str;
		cout<<"Number to String : "<<num_to_str<<endl;
		if(num_to_str.length() < 2)
		{
			cout<<"Invalid length of the Number."<<endl;
			return 0;
		}
		
		int i = 0;
		int count = 0;
		char rep_num;
		cout<<"Enter a number that has been repeated : ";
		cin>>rep_num;	
		/*if(rep_num = '0')
		{
			cout<<"Invalid Repeat number."<<endl;
			return 0;
		}*/
		for(i = 0; i < num_to_str.length(); i++)
		{
				if(rep_num == num_to_str[i])
					count ++;
		}
		if(count > 0)
			cout<<rep_num<<" in the number "<<num_to_str<<" appears is "<<count<<endl;
		
		
		
	
	return 0;
}

