#include<iostream.h>
int main()
{
	int numOne , numTwo , mp;
	cout<<"Enter two numbers :";
	cin>>numOne>>numTwo;
	if(numOne > numTwo)
		mp = numOne;
	else
		mp = numTwo;
	while(1)
	{
		if((mp % numOne == 0) && (mp % numTwo == 0))
			break;
		else
			mp++;
	}
	cout<<"\nLCM ("<<numOne<<" , "<<numTwo<<") = "<<mp;
	cout<<endl;
	cout<<endl;
	return 0;
}

