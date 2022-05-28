#include<iostream.h>
int main()
{
	float numone , numtwo , res;
	int choice;
	do
	{
		cout<<"1.Addition\n";
		cout<<"2.Subtraction\n";
		cout<<"3.Multiplication\n";
		cout<<"4.Division\n";
		cout<<"5.Exit\n\n";
		cout<<"Enter your choice (1-5) : ";
		cin>>choice;
		if (choice>=1 && choice<=4)
		{
			cout<<"Enter any two numbers: ";
			cin>>numone>>numtwo;
		}
		switch(choice)
		{
			case 1:
				res=numone+numtwo;
				cout<<"\nResult = "<<res;
				break;
			case 2:
				res=numone-numtwo;
				cout<<"\nResult = "<<res;
				break;
			case 3:
				res=numone*numtwo;
				cout<<"\nResult = "<<res;
				break;
			case 4:
				res=numone/numtwo;
				cout<<"\nResult = "<<res;
				break;
			case 5:
				return 0;
			default:
				cout<<"\nWrong choice!:";
				break;
		}
		cout<<"\n-----------------------\n";
	}while(choice!=5);
	cout<<endl;
	return 0;
}




