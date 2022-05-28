#include<iostream>
#include<cmath>
using namespace std;
int main()
{
		int array_size = 0;
		cout<<"Enter the array size: ";
		cin>>array_size;
		if(array_size < 5 || array_size > 10)
		{
			cout<<"Array Size is not valid."<<endl;
			return 0;
		}
		int numbers[array_size];
		int index = 0;
		int i = 0;
		cout<<"Enter the numbers: "<<endl;
		for(i = 0; i<array_size; i++)
			cin>>numbers[i];
			
		//Initialize the first element of the array as max
		int max = numbers[0];
		for(i = 0; i<array_size; i++)
		{
			if(max < numbers[i])
			{
				max = numbers[i];
				index = i;
			}			
		}
		cout<<"Maximum value entered is : "<<max<<" at position "<<(index+1)<<" and c++ index is : "<<index<<endl;
		
		// Add index to all the numbers except the max number
		for(i = 0; i<array_size; i++)
		{
			if( i == index )
				cout<<"Number is : "<<numbers[i]<<endl;
			else
				cout<<"Number ("<<numbers[i]<<") + Index ("<<index<<") is : "<<(numbers[i]+index)<<endl;
		}

	return 0;	
}
