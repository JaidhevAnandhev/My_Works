#include<iostream>
using namespace std;
int main()
{
	int n1 = 0, n2 = 0;
	int gcd = 1, lcm = 1;
	cout<<"Enter two numbers to find GCD and LCM of a number : "<<endl;
	cin>>n1>>n2;
	
	//Condition to find GCD
	int i = 0;
	
	for(i = 1; i<1000; i++)
	{
		if((n1 % i == 0) && (n2 % i == 0))
			gcd = i;
	}
	lcm = (n1 * n2)/gcd;
	cout<<"GCD of "<<n1<<" , "<<n2<<" is: "<<gcd<<endl;
	cout<<"LCM of "<<n1<<" , "<<n2<<" is: "<<lcm<<endl;
	return 0;
}
