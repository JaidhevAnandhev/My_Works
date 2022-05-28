#include<iostream.h>
int main()
{
	int num , temp , noOfdigit = 0 , res = 0 , rem , pow , i;
	cout<<"enter the number :";
	cin>>num;
	temp = num;
	while(num>0)
	{
		num = num / 10;
		noOfdigit++;
	}
	num = temp;
	while(num>0)
	{
		rem = num%10;
		pow = 1;
		i = 0;
		while(i < noOfdigit)
		{
			pow = pow * rem;
			i++;
		}
		res = res + pow;
		num = num/10;
	}
	if(res == temp)
		cout<<"\nIt is a armstrong number.";
	else
		cout<<"\nIt is not a armstrong number.";
	cout<<endl;
	return 0;
}