#include<iostream>
using namespace std;
int main()
{
		int n, mul = 1;
		cout<<"Enter some numbers :"<<endl;
		cin>>n;
		while(n != 0)
		{
				mul *= (n % 10);
				n /= 10;
		}
		cout<<"Muliplication series....."<<mul<<endl;
		return 0;
}
