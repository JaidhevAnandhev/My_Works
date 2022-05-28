#include<iostream>
using namespace std;
//Abst1 refers to abstract 1
class Abstraction
{
	private:
		int num;
		char ch;
	public:
		void setValues(int n , char c)
		{
			num = n;
			ch = c;
		}
		void getValues()
		{
			cout<<"Number :"<<num<<endl;
			cout<<"Character :"<<ch<<endl;
		}
};
int main()
{
	Abstraction myObj;
	myObj.setValues(100 , 'A');
	myObj.getValues();
	return 0;
}

