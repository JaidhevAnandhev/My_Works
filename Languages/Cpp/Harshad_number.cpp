#include<iostream>
using namespace std;
int main()
{
		int size = 0;
		cout<<"Enter the array size : ";
		cin>>size;
		
		if(size <= 0)
		{
				cout<<"Invalid Array Size."<<endl;
				return 0;
		}
		else
		{
			int num1[size];	
			cout<<"Enter the numbers : ";
			
			for(int i = 0; i < size; i++)
			{
				cin>>num1[size];	
			}
		}
}
