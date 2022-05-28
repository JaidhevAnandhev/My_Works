#include<iostream>
using namespace std;
#include<cstring>
//Base class
class Employee{
	protected : //protected access specifiers
	int salary;
};
//Derived class
class Programmer : public Employee{
	public:
		int bonus;
		void setsalary(int s)
		{
			salary = s;
		}
		int getSalary(){
			return salary;
		}
};
int main()
{
	// Derived class condition is applied which uses the properties of base class Employee
	Programmer myObj;
	myObj.setsalary(50000);
	myObj.bonus = 15000;
	cout<<"Salary :"<<myObj.getSalary()<<"\n";
	cout<<"Bonus :"<<myObj.bonus<<"\n";
	return 0;
}
