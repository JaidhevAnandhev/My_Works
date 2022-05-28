#include<iostream.h>
//Only base class'
class Jaidhev
{
	public:
	void func(int x)
	{
		cout<<"Value of x :"<<x<<endl;
	}
	void func(double x)
	{
		cout<<"Value of x :"<<x<<endl;
	}
	void func(int x , int y)
	{
		cout<<"Value of x and y :"<<x<<"   "<<y<<"   "<<endl;
	}
};
int main()
{
	Jaidhev myObj;
	myObj.func(5);
	myObj.func(5.55);
	myObj.func(85 , 95);
	return 0;
}

