#include<iostream>
using namespace std;
int main()
{
	float n1 = 0, n2 = 0;
	cout<<"Enter two numbers : "<<endl;
	cin>>n1>>n2;
	int operators;
	cout<<".........Disclaimer......."<<endl;
	cout<<"Enter 1 for Addition ."<<endl;
	cout<<"Enter 2 for Subtraction ."<<endl;
	cout<<"Enter 3 for Multiplication ."<<endl;
	cout<<"Enter 4 for Division ."<<endl;
	cout<<"Enter an operator: ";
	cin>>operators;
	switch(operators)
	{
		case 1:
			cout<<"Result of "<<n1<<" + "<<n2<<" = "<<(n1 + n2)<<endl;
			break;
			
		case 2:
			cout<<"Result of "<<n1<<" - "<<n2<<" = "<<(n1 - n2)<<endl;
			break;
		
		case 3:
			cout<<"Result of "<<n1<<" * "<<n2<<" = "<<(n1 * n2)<<endl;
			break;	
			
		case 4:
			cout<<"Result of "<<n1<<" / "<<n2<<" = "<<(n1 / n2)<<endl;
			break;
			
		default :
			cout<<"Invalid operator."<<endl;
		
	}
	return 0;
}
