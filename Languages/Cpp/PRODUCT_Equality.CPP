#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int ArraySize;
	cout << "Enter array size between 1 to 3:" << endl;
	cin >> ArraySize;
	if(ArraySize < 1 || ArraySize > 3)
	{
		cout<<"Invalid input" <<endl;
	}


	int *Array_1 = new int(ArraySize);

	cout << "Enter array values between 3 and 10 :" << endl;

	for(int i = 0; i<ArraySize; i++)
	{
		cin >> Array_1[i];

		if(Array_1[i] < 4 || Array_1[i] > 9)
		{
			cout << "Invalid input" << endl;
			return 0;

		}
	}

	cout << "You have entered array_1 value as" << endl;
	for( i=0 ; i<ArraySize; i++)
	{
		cout << Array_1[i] << "  " << endl;
	}

	int *Array_2 = new int(ArraySize);
	cout << "Enter the Second values from 3 to 10" << endl;


	for(i = 0; i < ArraySize; i++)
	{
		cin >> Array_2[i];

		if (Array_2[i] < 4  || Array_2[i] >9)
		{
			cout << "Invalid input. " <<endl;
			return 0;
		}
	}

	cout << "You have entered second array values as below." << endl;
	for( i = 0; i < ArraySize; i++)
	{
		cout <<  Array_2[i] << endl;
	}

	//Logic Starts
	int countPair = 0;
	for ( i = 0; i<ArraySize; i++)
	{
		int mul = 1, r = 0, x = Array_1[i];

		while(x>0)
		{
			r = x % 10;
			mul *= r;
			x = x / 10;
		}


		for ( int j = 0; j<ArraySize; j++)
		{
			int sum = 0, r = 0, y = Array_2[j];

			while(y>0)
			{
				r = y % 10;
				sum += r;
				y = y / 10;
			}

			if ( mul == sum )
			{
				cout<< "Pair - (" << Array_1[i] << ", " << Array_2[j] << ")" << endl;
				countPair++;
			}
		}
	}

	if ( countPair == 0 )
	{
		cout << "No pairs" << endl;
	}

	return 0;
}










