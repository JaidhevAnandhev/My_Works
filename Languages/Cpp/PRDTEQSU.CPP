#include<iostream.h>
int main()
{
	int ArraySize;
	cout<<"Enter the number of arrays :"<<endl;
	cin>>ArraySize;
	if(ArraySize < 1 || ArraySize > 3)
	{
		cout<<"Invalid input ."<<endl;
	}

	int *Array_1 = new int(ArraySize);
	cout<<"Enter the first array elements from 3 to 10 :"<<endl;
	for ( int i = 0 ; i <ArraySize ; i++)
	{
		cin>>Array_1[i];

		if(Array_1[i] < 4 || Array_1[i] > 9)
		{
			cout<<"Invalid Input"<<endl;
			return 0;
		}
	}
	for( i = 0; i<ArraySize; i++)
	{
		cout<<"First array elements are:"<<endl;
		cout<<Array_1[i]<<"   "<<endl;
	}


	int *Array_2 = new int (ArraySize);
	cout<<"Enter the second Array elements from 3 to 10:"<<endl;

	for (i = 0; i<ArraySize; i++)
	{
		cin>>Array_2[i];

		if(Array_2[i] <4 || Array_2[i] >9)
		{
			cout<<"Invalid Input."<<endl;
		}
	}
	for (i = 0 ; i<ArraySize ; i++);
	{
		cout<<"Second array elements are:"<<endl;
		cout<<Array_2<<"  "<<endl;
	}
	//Logic starts
	int countPair = 0;
	for(i = 0 ; i<ArraySize ; i++)
	{
		int mul = 1 , r = 0 , x = Array_1[i];
		r = x % 10;
		mul *= r;
		x = x/10;

		for( int j = 0 ; j<ArraySize ; j++)
		{
			int sum = 0 , r = 0 , y = Array_2[j];
			r = y % 10;
			sum += r;
			y = y/10;


		if(mul==sum)
		{
			cout<<"Pair - (" << Array_1[i] <<" , "<<Array_2[j]<<")"<<endl;
			countPair++;
		}
		if(countPair == 0 )
		{
			cout<<"No Pair"<<endl;
		}
		}
	}
	return 0;
}