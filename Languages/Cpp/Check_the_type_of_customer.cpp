#include<iostream>
#include<cstring>
#include<cmath>
#include<sstream>
using namespace std;
int main()
{
		//Get Customer ID from the user
		string customer_id;
		cout<<"Enter the customer ID starting with Mega: ";
		cin>>customer_id;
		
		//cout<<customer_id.substr(0,4)<<endl;
		
		// Validate the first four characters is "Mega"
		if (customer_id.substr(0,4) == "Mega")
		{
			//Check if the customer belongs to Gold, Silver, Platinum
			string ctype = "";
			if(customer_id.find("Gold") == 4)
				ctype = "Gold";
			else if(customer_id.find("Silver") == 4 )
				ctype = "Silver";
			else if(customer_id.find("Platinum") == 4 )		
				ctype = "Platinum";
				
			if (ctype != "")
			{
				// Get only digits from the input to derive customer number
				string get_custNo;
				for(int i = 0; i<customer_id.length(); i++ )
				{
					if(isdigit(customer_id[i]))
						get_custNo += customer_id[i];			
				}
				
				// Convert the string back to int for validation
				stringstream convert(get_custNo);
				int cust_no = 0;
				convert >> cust_no;
	
				// Validate customer number between 99 and 1000
				if(cust_no > 99 && cust_no < 1000)	
					cout<<"Welcome Mega mart "<<ctype<<" Customer"<<endl;
				else
					cout<<"Invalid customer"<<endl;	
			}
			else
				cout<<"Invalid customer type";
		}
		else
			cout<<"Invalid Shop Name.";
		
						
		
			
		return 0;		
	
}
