#include<iostream>
using namespace std;
int main()
{
		int num;
		cout<<"Enter a number: ";
		cin>>num;
		int prdt = 1;
		int a = 0;
		if(num < 0 || num > 32767)
		{
			cout<<"Invalid number."<<endl;
			return 0;		
		}
		
		else
		{
			while (num > 0)
			{
				a = num % 10;
				if(a == 2 || a == 3 || a == 5 || a == 7)
					prdt *= a;
				num = num / 10;
			}
			if(prdt == 1)
			{
				cout<<"No Prime number found."<<endl;
				return 0;
			}
			else
			{
				cout<<"Product is : "<<prdt<<endl;	
			}
		}
		
			
	return 0;
}
