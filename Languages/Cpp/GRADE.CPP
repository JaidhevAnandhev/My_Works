#include<iostream.h>
int main()
{
	int i;
	float mark , sum = 0 , avg;
	cout<<"Enter marks obtained in 5 subjects :";
	for(i=0 ; i<5 ; i++)
	{
		cin>>mark;
		sum = sum + mark;
	}
	avg=sum / 5;
	cout<<"\nGrades :";
	if(avg>=91 && avg<=100)
		cout<<"A1";
	else if(avg>=81 && avg<91)
		cout<<"A2";
	else if(avg>=71 && avg<81)
		cout<<"B1";
	else if(avg>=61 && avg<71)
		cout<<"B2";
	else
		cout<<"Invalid";
	cout<<endl;
	return 0;

}









