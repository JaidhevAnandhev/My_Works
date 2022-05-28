#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	//clrscr();
	char ticket[6];
	cout<<"Enter your ticket details :"<<endl;
	cin>>ticket;

	// Validate ticket length shouldbe 6 characters
	if(strlen(ticket)!=6)
	{
		cout<<"Invalid ticket details."<<endl;
		return 0;
	}

	// Validate gate details should be N, E, W, S
	char gate = ticket[0];
	if(gate == 'N' || gate == 'E' || gate == 'W' || gate == 'S')
	{
		cout<<"Gate validation Success!"<<endl;

		// Validate block details  between A and F
		char block = ticket[1];
		if(block=='A' || block=='B' || block=='C' || block=='D' || block=='E' || block=='F')
		{
			cout<<"Block validation Success!"<<endl;


			// Validation of floor values between 1 and 4
			char floor = ticket[2];
			if(floor == '1' || floor == '2' || floor == '3' || floor == '4')
			{
				cout<<"Floor validation success!"<<endl;

				// Validation of seat no should be between 1 and 500
				//string str = ticket
				//const char *str = ticket.substr(3, 3);
				int seat_no = 123;
				//sscanf(str, "%d", &seat_no);
				//cout<<seat_no<<" is converted to integer."<<endl;
				if(seat_no > 0 || seat_no <= 500)
				{
					cout<<seat_no<<" is valid."<<endl;
					cout<<"Your seat has been booked Successfully!!!"<<endl;
				}
				else
				{
					cout<<seat_no<<" is invalid"<<endl;
					return 0;
				}
			}
			else
			{
				cout<<floor<<" is an invalid floor."<<endl;
				return 0;
			}
		}
		else
		{
			cout<<block<<" is an invalid block."<<endl;
			return 0;
		}
	}
	else
	{
		cout<<"Invalid gate value : " << gate<<endl;
		return 0;
	}


	printf("Valid ticket number is %s", ticket);
	cout<<endl<<"Enter x to exit"<<endl;
	cin>>ticket;
	return 0;
}