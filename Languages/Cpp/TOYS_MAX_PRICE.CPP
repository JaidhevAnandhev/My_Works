#include<iostream>
using namespace std;
int main()
{
	int noOfMonths = 0;
	cout<<"Enter no. of months:"<<endl;
	cin>>noOfMonths;
	if(noOfMonths<=0)
	{
		cout<<"Invalid input"<<endl;
		cout<<"Please enter no of months greater than zero"<<endl;
		return 0;
	}
	//enter the total toys purchased in each month
	cout<<"Enter the total toys purchased in each month:"<<endl;

	int k[12]; //noOfToysPurchasedInEachMonth[12];
	int i;
	for(i = 0; i< noOfMonths; i++)
	{
		cin>>k[i];

		//check whether the toys purchased is greater than 10.
		if(k[i] < 10)
		{
			cout<<"Invalid input"<<endl;
			return 0;
		}

	}
	//Get the maximum number of toys purchased in a month
	int max = k[0]; // initalize the  first value in the array
	//start iteration from second value of array
	for( i = 1; i < noOfMonths; i++)
	{
		if(max < k[i])
		{
			max = k[i];
		}
	}

	//find the maximum number of toys purchased month
	for(i = 0; i<noOfMonths; i++)
	{
		if(max == k[i])
		{
			cout<<"Month: "<<i+1<<endl;
		}
	}

	cout<<"Enter x for exit"<<endl;
	cin>>noOfMonths;
	return 0;
}
