#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
	// Get the input male(s) or female(s) from the user
	string male_female;	
	cout<<"Enter the gender : "<<endl;
	cin>>male_female;
	
	
	// Converting string to char array
	char p[male_female.length()];
	
	//Validating the input for checking male or female 
	int malesCount = 0, femalesCount = 0;
	for(int i  = 0; i<sizeof(p); i++)
	{
			if( male_female[i] == 'M' || male_female[i] == 'm')
				malesCount++;
			else if(male_female[i] == 'F' || male_female[i] == 'f')
				femalesCount++;
			cout<<male_female[i]<<endl;
	}
	
	//Display the output
	cout<<malesCount<<" Males."<<endl;
	cout<<femalesCount<<" Females."<<endl;
	return 0;
}
	 

	

