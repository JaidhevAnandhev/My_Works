#include<iostream>
using namespace std;
int main()
{
	int array_size = 0;
	cout<<"Enter the array size : ";
	cin>>array_size;
	int james_score[array_size];
	int karthick_score[array_size];
	int i = 0;
	int j = 0;
	int index = 0;
	if(array_size <= 0 || array_size > 10 )
	{
		cout<<"Invalid array size."<<endl;
		return 0;
	}
	int common_score[array_size];
	
	cout<<"Enter James Score : "<<endl;
	for(i = 0; i<array_size; i++)
		cin>>james_score[i];
	
	cout<<"Enter Karthick's score : "<<endl;
	for(i = 0; i<array_size; i++)
		cin>>karthick_score[i];
		
	for(i = 0; i<array_size; i++)
	{
		for(j = 0; j<array_size; j++)
		{
			if(james_score[i] == karthick_score[j])
			{
				//cout<<index;
				common_score[index] = james_score[i];
				//cout<<"common_score[index] "<<common_score[index];
				index++;	
			}
		}
	}
	cout<<"Common score of both of them are : ";
	for(i = 0; i<index; i++)
		cout<<common_score[i]<<" ";
	return 0;
}
