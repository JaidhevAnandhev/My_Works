#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>
int main()
{
	//clrscr();
	char name[50];
	cout<<"Enter the Bike Rental person name:"<<endl;
	cin>>name;


	//To check whether the given name contains only alphabets
	for(int i = 0; i<strlen(name); i++)
	{
		if(!isalpha(name[i]))
		{
			cout<<"Invalid input."<<endl;
			return 0;
		}
	}

	//Get the Time Duration
	int time;
	cout<<"Enter the time duration"<<endl;
	cin>>time;
	//Validate time duration
	if(time<1 || time>24)
	{
		cout<<time<<" is an invalid time duration."<<endl;
		return 0;
	}



	//Get the payment option
	int po = 0;
	cout<<"List of payment options"<<endl;
	cout<<"1) Visa card"<<endl;
	cout<<"2) Rupay card "<<endl;
	cout<<"3) Master card "<<endl;

	//Validate Payment Option
	while(1 == 1)
	{
		cin>>po;
		if(po<=0 || po>3)
			cout<<"Try again"<<endl;
		else
			break; //We are good to proceed as valid option provided
	}

	//Derive discount
	float discount = 0.0; //Deafault discount set to master card
	if(po == 1)
		discount = 0.25;
	else if(po == 2)
		discount = 0.17;

	//Calculate bill amount
	const amtPerHr = 120;
	float billAmt = time * amtPerHr;

	//Implement discount only above 5 hours
	if( time >= 5)
		billAmt -= (billAmt * discount);

	//Prepare final statement
	printf("Dear %s your bill amount is: %.2f", name, billAmt);

	cout<<endl;
	cout<<"Bike Rented to:"<<name<<endl;
	cout<<endl;
	cout<<"Enter x toexit:"<<endl;
	cin>>name;
	return 0;
}