#include<iostream>
using namespace std;
int main()
{
		int nos = 0;
		cout<<"Enter the set of students : ";
		cin>>nos;
		int count = 0;
		int i = 0;
		int roll_no[nos];
		if(nos <= 0 || nos > 11)
		{	
			cout<<"Invalid set no."<<endl;
			return 0;
		}
		
		cout<<"Enter the roll number: "<<endl;
		for(i = 0; i<nos; i++)
		{
			cin>>roll_no[i];
			if(roll_no[i] < 0)
			{
					cout<<"Invalid roll Number."<<endl;
					return 0;
			}
			if(roll_no[i] % 2 != 0)
				cout<<roll_no[i]<<" is an Odd number."<<endl;
			else
				cout<<roll_no[i]<<" is not an Odd number."<<endl;
			
		}
	
	return 0;	
}
