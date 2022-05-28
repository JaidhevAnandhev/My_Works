#include<iostream>
using namespace std;
int main()
{
		int array_size = 0;
		cout<<"Enter the size of the array : ";
		cin>>array_size;
		if(array_size <= 0 || array_size > 10)
		{
				cout<<"Invalid Array Size."<<endl;
				return 0;
		}
		int number_1[array_size];
		int number_2[array_size];
		int i = 0;
		int count = 0;
		cout<<"Enter the elements in first array : ";
		for(i = 0; i<array_size; i++)
		{
			cin>>number_1[i];
		}  
		cout<<"Enter the elements in Second array : ";
		for(i = 0; i<array_size; i++)
		{
			cin>>number_2[i];
		}
		for(i = 0; i<array_size; i++)
		{
				if(number_1[i] % 2 != 0 && number_2[i] % 2 != 0)
					count ++;
		}
		if(count == array_size)	
			cout<<"There are no even numbers in the array."<<endl;
		else
		{
			for(i = 0; i<array_size; i++)
			{
					if(number_1[i] % 2 == 0 && number_2[i] % 2 == 0)
					{
						cout<<number_1[i]<<" and "<<number_2[i]<<" are even numbers."<<endl;
						int sum = number_1[i] + number_2[i];
						cout<<"Sum of Even numbers : "<<sum<<endl;
					}
			}
		}
	return 0;	
}
