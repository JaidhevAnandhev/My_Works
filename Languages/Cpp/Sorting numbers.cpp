#include<iostream>
using namespace std;

//void printArray(int arr[5]);

int main()
{
		 // Get the input size fromthe user
		 int size;
		 int i = 0;
		 int j = 0;
		 int d = 0;
		 int count = 0;
		 int numbers[size];
		 int temp = 0;
		 cout<<"Enter the size of the array : "<<endl;
		 cin>>size;
		 if(size < 1)
		 {
		 		cout<<"Invalid Input."<<endl;
		 		return 0;
		 }
		/* //check bound
		if(size<0 || size>MAX)
		{
			cout<<"Input valid range!!!"<<endl;
			return -1;
		}*/

		 for(i = 0; i<size; i++)
		 {
		 		cout<<"Enter the number "<<i+1<<" : "<<endl;
		 		cin>>numbers[i];
		 		if(numbers[i] > 11)
		 		{
		 			cout<<"Invalid input number."<<endl;
					return 0;			
				}
		}
		
		cout<<"Unsorted array elements :"<<endl;
		// printArray(numbers);
		for(int i = 0; i<size; i++)
			cout<<numbers[i]<<" ";
				
		for(i = 0; i<size; i++)
		{
			
			for(j = 0; j<size; j++)
			{
				// Sort the array in descending order
				if(numbers[i] > numbers[j])
				{
						temp = numbers[i];
						numbers[i] = numbers[j];
						numbers[j] = temp;
				}
			}	
		}
	
		cout<<endl<<"Sorted array elements in descending order:"<<endl;
		//printArray(numbers);
		for(int i = 0; i<size; i++)
			cout<<numbers[i]<<" ";
	return 0;
}

/*void printArray(int arr[5])
{
	for(int i = 0; i<5; i++)
			cout<<arr[i]<<" ";
}*/

