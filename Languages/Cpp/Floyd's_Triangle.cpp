#include<iostream>
using namespace std;
int main()
{
	int i = 0, j = 0, rows, cols;
	int n = 1, first, last;
	
	// Print the number of rows
	cout<<"Enter the number of rows: "<<endl;
	cin>>rows;
	cout<<"Pyramid Pattern after printing number of rows: "<<rows<<endl;
	for(i = 0; i<=rows; i++)
	{
		// Initially first row contains only one number
		first = n;
		
		//Last number should be till the number declared in last variable.
		last = first + i - 1;
		
		// Printing the Column
		cols = i;
		
		for(j = 1; j<=cols; j++)
		{
				cout<<n<<" ";
				n++;
		}
		cout<<endl;
	}
	cout<<"\n";
	return 0;
		
}
