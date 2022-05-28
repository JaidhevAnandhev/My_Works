#include<iostream.h>
#include<conio.h>
const double pi=3.14;
int main()
{
	clrscr();
	double area, circuit, radius = 1.5;

	area=pi * radius * radius;
	circuit=2 * pi * radius;

	cout<<"\nTo evaluater a circle\n"<<endl;

	cout<<"Radius : "<<radius<<endl;
	cout<<"Circumference:"<<circuit<<endl;
	cout<<"Area:"<<area<<endl;

	return 0;
 }
