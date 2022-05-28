#include<iostream>
using namespace std;
int main()
{
		int no_1 = 0, no_2 = 0;
		cout<<"Enter the numbers : "<<endl;
		cin>>no_1>>no_2;
		int i = 0;
		int j = 0;
		if(no_1 < 0 || no_2 < 0)
			cout<<"Negative numbers cannot be prime."<<endl;
		else if(no_1 > no_2)
			cout<<"Invalid Input."<<endl;
		else if(no_1 == 0 && no_2 == 1)
			cout<<"No prime number between 0 and 1."<<endl;
		else
		{
			for(i = no_1; i<=no_2; i++)
			{
				int f = 0;
				for(j = 1; j<=i; j++)
				{
					if(i % j == 0)
						f++;
				
				}
					if(f==2)
						cout<<"Prime Number : "<<no_1<<endl;
			}
		}
	return 0;
}
