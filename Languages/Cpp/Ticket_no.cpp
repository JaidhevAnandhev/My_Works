#include<iostream>
#include<cstring>
#include<sstream>
#include<ctype.h>
using namespace std;
int main()
{
		// Get ticket number from the user
		string ticket_no;
		cout<<"Enter your ticket number :"<<endl;
		cin>>ticket_no;
		
		// Validate the length of the ticket number exactly 10 characters
		if(ticket_no.length() != 10)
		{
				cout<<"Invalid Input.";
				return 0;
		}
		
		// Checking the 6th and 7th character to check the number of seats
		string seats;
		seats = ticket_no.substr(5,2);
		
		//Convert string to integer
		stringstream convert(seats);
		int no_of_seats = 0;
		convert >> no_of_seats;
		//cout<<"No of seats between 1 to 10 are : "<<no_of_seats<<endl;
		
		// Validating the no of seats booked between 1 and 10
		if(no_of_seats < 1 || no_of_seats > 10 )
		{
			cout<<"Invalid count"<<endl;
			return 0;
		}
		else
			cout<<"No of seats available are :"<<no_of_seats<<endl;
		
		// Validate the seat number from last 3 characters
		string seat_no;
		seat_no = ticket_no.substr(7,3);
		//cout<<endl<<"Seat no. is:"<<seat_no<<endl;
		
		//Check whether the 1st character in seat_no contains only uppercase.
		if(isupper(seat_no[0]))
			cout<<"Valid seat number: "<<seat_no<<endl;
		else
		{
			cout<<endl<<"Invalid seat number."<<endl;
			return 0;
		}
		
		// Validate the given input is only in uppercase 1st and 2nd character
		if(isupper(ticket_no[0]) && isupper(ticket_no[1]))
			cout<<"Valid Ticket Number !"<<endl;
		else
			cout<<"Invalid Ticket number.Try Again"<<endl;
			
		return 0;
			
}

