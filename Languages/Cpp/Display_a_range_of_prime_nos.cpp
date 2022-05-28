#include<iostream>
#include<cmath>
#include<conio.h>
#include<stdio.h>
using namespace std;

//Initializing the variables in void function
void are_prime_nos(int a, int b)
{
		int flag;
		for(int i = a; i<=b; i++)
		{
			if(a == 0 || b == 0)  //Skip these numbers
			{
				cout<<"They are neither prime nor composite."<<endl;
			}
			flag = 1;//To check whether a number is prime or composite
			
			for(int j = 2; j<=i/2; j++)
			{
				if(i % j == 0)
				{
					flag = 0;// It compares 1 with zero so that it can't be a prime number 	
					break;
				}
			}
			if(flag == 1)//Since it is not equal to zero it is a prime number	
				cout<<"Prime numbers are : "<<i<<" "<<endl;
		}
}
// Displaying the output 
int main()
{
	int a, b;
	cout<<"Enter two numbers :"<<endl;
	cin>>a>>b;
	are_prime_nos(a,b);
	
	return 0;
}
