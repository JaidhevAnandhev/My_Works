#include<iostream>
using namespace std;
int main()
{
		// Get the input : customer name and land area from the user
		string name;
		cout<<"Enter the customer name :"<<endl;
		cin>>name;
		double land_area;
		cout<<"Enter the land area : "<<endl;
		cin>>land_area;
		
		// Validate the land area between 400 and 2200
		if(land_area < 400 || land_area >2200)
		{
				cout<<land_area<<" is not in range."<<endl;
				return 0;
		}
		
		// Get the cost of land based on the land area 
		float per_sq_ft;
		int discount;
		int after_discount;
		if(land_area >= 400 && land_area <=599)
		{
			per_sq_ft = 1700;
			discount = 5;
		}
				
		else if(land_area >= 600 && land_area <=999 )
		{
				per_sq_ft = 1950;
				discount = 5;
		}
				
		else if(land_area >= 1000 && land_area <= 1499)
		{
				per_sq_ft = 1700;
				discount = 4;
		}
				
		else if(land_area >= 1500 && land_area <= 2200)
		{
			per_sq_ft = 2300;
			discount = 3;
		}
		else
				cout<<"Invalid input"<<endl;
		
		// Applying the discount based on the land area purchased
		
		// Displaying the cost of the land
		int cost_of_land;
		cost_of_land = land_area * per_sq_ft;
		//cout<<"Cost of the land is : "<<cost_of_land<<endl;
		
		cout<<"Customer name is : "<<name<<endl<<"Cost of the land is : Rs "<<cost_of_land<<" /- "<<endl;
		
		// Applying discount
		after_discount = cost_of_land - (cost_of_land * discount / 100);
		
		cout<<"Cost of the land after discount : Rs "<<after_discount<<" /- "<<endl;
		
		// Displaying the output
		cout<<"Customer name is : "<<name<<endl<<"Cost of the land is : Rs "<<cost_of_land<<" /- "<<endl<<"After discount : Rs "<<after_discount<<" /- "<<endl;
		return 0;
}
