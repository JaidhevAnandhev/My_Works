#include<iostream>
using namespace std;
int main()
{
		int array_size = 0;
		cout<<"Enter the array size : "<<endl;
		cin>>array_size;
		if(array_size <= 0 ||  array_size > 11)
		{
				cout<<array_size<<" is an invalid array size."<<endl;
				return 0;
		}
		
		int i = 0;
		int count = 0;
		int b[array_size];
		cout<<"Enter the numbers : "<<endl;
		for(i = 0; i < array_size; i++)
		{
				cin>>b[i];
				if(b[i] < 2 && b[i] > 11 )
				{
						cout<<"Invalid number ."<<endl;
						return 0;
				}
	    		int n = sizeof(b[i]) / sizeof(b[0]);
	 
			    /*Here we take two parameters, the beginning of the
			    array and the length n upto which we want the array to
			    be sorted*/
			    sort(b[i], b[i] + n);
			 
			    cout << "\nArray after sorting using "
			            "default sort is : \n";
			    for (int i = 0; i < n; ++i)
			        cout << b[i] << " ";
			 
		}
	
	return 0;	
}
