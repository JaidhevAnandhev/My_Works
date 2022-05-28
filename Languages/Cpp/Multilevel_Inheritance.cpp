#include<iostream>
using namespace std;
 // Class starts
 //Base class 1
class Base_Add{  
	// Declaring the variable
	public:
		int a1, a2;
		
		// Getting input from the user stored in get_input() function
		public:
			void set_input(int f1, int f2){
			
			a1 = f1;
			a2 = f2;
		}
};
//Deived class 1 
class Derived_Add_1 : public Base_Add {
	
	// Arithmetic operation between two operands
	public:
		int sum;
	public:
		void Add(){
			sum = a1 + a2;
		}
	public:
		void Display(){
			cout<<"Sum is: "<<sum<<" and a1 = "<<a1<<" and a2 = "<<a2<<endl;		
	}
};

//Derived Class 2
class Result : public Derived_Add_1{
};

// Main() function starts
int main()
{
	//Declaring object for Derived class
//	Result obj;
//	int a, b;
//	obj.get_input(a, b);
//	obj.Adding();
//	obj.Display();
	int i, j;
	cout<<"Enter two numbers: "<<endl;
	cin>>i>>j;
	
	Result obj;
	obj.set_input(i, j);
	obj.Add();
	obj.Display();
	return 0;
}
