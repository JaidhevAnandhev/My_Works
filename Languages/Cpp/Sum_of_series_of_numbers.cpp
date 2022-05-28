#include<iostream>
using namespace std;
int main()
{
		int size = 0;
		cout<<"Enter the size :";
		cin>>size;
		if(size <= 0)
		{
				cout<<"Invalid number."<<endl;
				return 0;
		}
		
		int i = 0;
		int sum = 0;
		int numbers[size];
		cout<<"Enter the numbers : "<<endl;
		
		for(i = 0; i<size; i++)
		{
			cin>>numbers[i];
			if(numbers[i] <= 0)
			{
				cout<<"Invalid number."<<endl;
				return 0;		
			}
			sum += numbers[i];	
		}
		
	cout<<"Sum of the given numbers are :"<<sum<<endl;
	return 0;
}
