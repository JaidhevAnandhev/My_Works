#include <iostream>
using namespace std;

int main()
{
    int size;
	cout<<"Enter the array size : ";
    cin>>size;
    cout<<endl;
    
    int number[size];
	int i = 0;
    for(i = 0; i<size; ++i)
    {
       cout << "Enter Number " <<i + 1<< " : ";
       cin>>number[i];
    }
	
	int min = number[0];
	int max = number[0];
	for(i = 1; i<size; i++)
	{
			if(min > number[i])
				min = number[i];
			if(max < number[i])
				max = number[i];
	}
	cout<<"Maximum number :"<<max<<endl;
	cout<<"Minimum number :"<<min<<endl;

    return 0;
}

