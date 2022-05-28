#include<iostream.h>
int main()
{
	int decimalNum , rem ,i = 0;
	char hexaDecimalNum[50];
	cout<<"Enter the decimal Number :";
	cin>>decimalNum;
	while(decimalNum != 0)
	{
		rem = decimalNum % 16;
		if(rem < 10)
			rem = rem + 48;
		else
			rem = rem + 55;
		hexaDecimalNum[i] = rem;
		i++;
		decimalNum = decimalNum / 16;
	}
	cout<<"Equivalent Hexadecimal value :";
	for(i = i - 1 ; i>=0 ; i--)
		cout<<hexaDecimalNum[i];
	cout<<endl;
	return 0;
}
