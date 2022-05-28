#include<iostream>
using namespace std;
#include<cstring>
//Base class
class MyClass{
	public:
		void myFunction(){
			cout<<"Some content in parent class;";
		}
};
//Another base class
class MyOtherClass{
	public:
		void myOtherFunction(){
			cout<<"Some content in another class";
		}
};
//Derived class
class MyChildClass : public MyClass , public MyOtherClass{
};
int main()
{
	MyOtherClass myobj1;
	MyClass myobj2;
	myobj2.myFunction();
	cout<<endl;
	myobj1.myOtherFunction();
	cout<<endl;
	MyChildClass myobj3;
	myobj3.myFunction();
	cout<<endl;
	myobj3.myOtherFunction();
	return 0;
}
