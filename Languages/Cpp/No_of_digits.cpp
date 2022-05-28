#include<iostream>
using namespace std;
int main()
{
		int number ,num = 0;
		cout<<"Enter a positive number: "<<endl;
		cin>>number;
		int num_copy = number;
		while(number != 0)
		{
			number /= 10;
			num++;	
		}
			
		cout<<"No of digits in "<<num_copy<<" is : "<<num<<endl;
		return 0;
}
