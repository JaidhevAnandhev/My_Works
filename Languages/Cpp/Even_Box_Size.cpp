#include<iostream>
using namespace std;
int main()
{
	int box_size;
	cout<<"Enter the Box size :";
	cin>>box_size;
	if(box_size < 0)	
	{
		cout<<box_size<<" is an invalid box size."<<endl;
		return 0;
	}
	int i = 0;
	int box[box_size];
	int c = 0, sum = 0, temp = 0; 
	cout<<"Enter the numbers : "<<endl;
	for(i = 0; i < box_size; i++)
	{
			cout<<"Enter the value of box - "<<i+1<<" : "<<endl;
			cin>>box[i];
			if(box[i] <= 0 )
			{
					cout<<"Invalid Size."<<endl;
					return 0;
			}
	}
	cout<<"You have entered : ";
	for(i = 0; i<box_size; i++)
		cout<<box[i]<<" ";
		
	// Sum the remainder after dividing each number by 10	
	for(i = 0; i < box_size; i++)
	{
			c = box[i] % 10;
			sum += c;
			c = 0;
	}
	if(sum % 2 == 0)
		cout<<"The Sum value "<<sum<<"  is a valid even number."<<endl;
	else
	{
			cout<<"The Sum value "<<sum<<" is not a valid number."<<endl;
			return 0;
	}
	return 0;
}
