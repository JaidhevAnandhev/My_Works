#include<iostream>
#include<cmath>
using namespace std;
int main()
{
		int number = 0;
		cout<<"Enter a number : "<<endl;
		cin>>number;
		if(number <= 0)
		{
			cout<<"Not a valid number."<<endl;
			return 0;
		}
		else
		{
			int sum = 0, c = 0;
			int size = 0;
			int i = 0;
			size= trunc(log10(number)) + 1;
			cout<<"Size of the integer is : "<<size<<endl;
			for(i = 0; i<size; i++)
			{
				if(i+1 % 3 == 0)
				{
					sum += number;
					c++;	
				}
			}
			if(c==0)
				cout<<"Sum is : "<<sum<<endl;
			
				
		}

	return 0;
}
