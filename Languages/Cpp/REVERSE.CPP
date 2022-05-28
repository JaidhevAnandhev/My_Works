#include<iostream.h>
#include<string.h>
int main()
{
	char str[] = "Hello";
	int i=0, k=0;
	cout<<"Given string:";
	//get the length of the string in k
	for(i = 0; str[i]!='\0'; i++)
	{
		k++;
		cout<<str[i];
	}
	cout<<endl<<"Reversed string:";

	//read the string in reverse order
	for(i = k-1; i>=0; i--)
	{
		cout<<str[i];
	}

	cout<<endl<<"Enter x to exit"<<endl;
	cin>>k;
	return 0;
}
