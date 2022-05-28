#include<iostream>
using namespace std;
#include<cstring>
//Base class
class Vehicle{
	public:
		string brand = "Ford";
		void honk()
		{
		       cout<<"Hello Jaidhev \n";
		}
};
     //Derived class:
     //Class car (subclass) inherits the properties of class Vehicle which is the super/Parent/Base class
class Car : public Vehicle{
	public:
		string model = "Welcome to c++";
};

int main()
{
		Car myCar;
		myCar.honk();
		cout<<myCar.brand<<endl;
		cout<<myCar.model<<endl;
		return 0;
}

