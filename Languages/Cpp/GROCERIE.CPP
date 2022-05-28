#include<iostream.h>
int main()
{
	//declare arrays
	char itemName [20];
	double itemcost[80];

	//declare variables
	double total = 0;
	int numItems = 0;

	//number of items

	cout<<"Enter number of groceries :"<<endl;
	cin>>numItems;
	cout<<"\n";

		for(int i = 0 ; i < 2 ; i++)
		{
			cout<<"Enter Item name :"<<endl;
			cin>>itemName[i];
			cout<<"Enter the cost of the "<<itemName[i]<<endl;
			cin>>itemcost[i];
		}

		for(i = 0 ; i < 2 ; i++)
		{
			cout<<itemName[i]<<endl;
			cout<<"    "<<endl;
			cout<<itemcost[i]<<endl;
		}
		//total calculations
		for(i =1; i<=3; i++)
		{
			total += itemcost[i];
			cout<<"Total Amount :"<<total<<endl;
		}
		return 0;
}

