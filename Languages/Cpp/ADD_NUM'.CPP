#include<iostream.h>
int main()
{
	int i , n , num , sum = 0;
	cout<<"How many numvers you want to enter?";
	cin>>n;
	cout<<"Enter "<<n<<" numbers :";
	for(i = 0; i<n ; i++)
	{
		cin>>num;
		sum = sum + num;
	}
	cout<<"\Sum of all "<<n<<" numbers is "<<sum;
	cout<<endl;
	return 0;
}
