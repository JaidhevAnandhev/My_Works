#include<iostream.h>
//abst4 refers to abstract program 4
class Number
{
	public:
		virtual void num() = 0;
};
class Add : public Number
{
	public:
		void num()
		{
		  cout<<"~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		  cout<<"Multiplication of two numbers"<<endl;
		  cout<<"~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		}
		void setSum()
		{        int a , b;
			 cout<<"Enter two numbers :"<<endl;
			 cin>>a>>b;
		}
		void displaySum()
		{       int a , b , c;
			c = a * b;
			cout<<"Product is :"<<c<<endl;
		}
};
int main()
{
	Add addObj;
	addObj.num();
	addObj.setSum();
	addObj.displaySum();
	return 0;
}