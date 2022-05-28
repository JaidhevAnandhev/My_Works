#include<iostream>
using namespace std;
int main()
{
		cout<<"Welcome to PlayStation purchase area :)"<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		int amount = 0;
		cout<<"Enter the amount : "<<endl;
		cin>>amount;
		string player_type;
		
		cout<<"Enter the Game Player Type"<<endl;
		cin>> player_type;
		if(player_type == "PSone" || player_type == "psone")
		{
				if(amount >= 5000)
					cout<<"You can buy PS 1."<<endl;
				else
				{
					cout<<"You need more money to buy PS 1."<<endl;
					return 0;
				}
		}
		else if(player_type == "PStwo" || player_type == "pstwo")
		{
				if(amount >= 7800)
					cout<<"You can buy PS 2."<<endl;
				else
				{
					cout<<"You need more money to buy PS 2."<<endl;
					return 0;
				}
		}
		else if(player_type == "PSthree" || player_type == "psthree")
		{
			if(amount >= 9500)
					cout<<"You can buy PS 3."<<endl;
				else
				{
					cout<<"You need more money to buy PS 3."<<endl;
					return 0;
				}	
		}
		else if(player_type == "PSfour" || player_type == "psfour")
		{
			if(amount >= 12000)
					cout<<"You can buy PS 4."<<endl;
			else
			{
				cout<<"You need more money to buy PS 4."<<endl;
				return 0;
			}	
		}
		else if(player_type == "PSfive" || player_type == "psfive")
		{
			if(amount >= 15000)
					cout<<"You can buy PS 5."<<endl;
			else
			{
				cout<<"You need more money to buy PS 5."<<endl;
				return 0;
			}
		}
		else
			cout<<player_type<<" is an invalid player type."<<endl;
				
	return 0;
}
