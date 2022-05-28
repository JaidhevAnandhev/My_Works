#include<iostream>
using namespace std;
int main()
{
		int n1, n2, n3;
		cout<<"Enter number 1: "<<endl;
		cin>>n1;
		
		if (n1 > 0)
		{
				cout<<"Enter number 2: "<<endl;
				cin>>n2;
				if(n2 > 0)
				{
					cout<<"Enter number 3 : "<<endl;
					cin>>n3;
					if(n3 > 0)
					{
							cout<<endl<<"Numbers converted to expression as below : "<<endl;w
							if(n1 + n2 ==  n3)
							{
								cout<<n1<<" + "<<n2<<" = "<<n3<<endl;
							}
							else if(n1 - n2 ==  n3)
							{
								cout<<n1<<" - "<<n2<<" = "<<n3<<endl;
							}	
							else if(n1 * n2 ==  n3)
							{
								cout<<n1<<" * "<<n2<<" = "<<n3<<endl;
							}
							else if(n1 / n2 ==  n3)
							{
								cout<<n1<<" / "<<n2<<" = "<<n3<<endl;
							}
							else
							{
									cout<<n3<<" is a invalid program."<<endl;
									return 0;
							}
					}	
					else
					{
						cout<<"Invalid"<<endl;
						return 0;
					}
				}
		else
		{
			cout<<"Invalid"<<endl;
			return 0;
		}	
		}
	return 0;	
}
