#include<iostream>
using namespace std;
 // Class starts
 //Base class 1
class Base_Add{  
	// Declaring the variable
	public:
		int a1;
		
		// Getting input from the user stored in get_input() function
		public:
			void set_a1(int f1){			
				a1 = f1;			
			}
};
//Deived class 1 
class Derived_Add_1{
	
	// Arithmetic operation between two operands
	public:
		int a2;
	public:
		void set_a2(int f2){			
			a2 = f2;			
		}
};

//Derived Class 2
class Result : public  Base_Add, public Derived_Add_1{
	public:
		
		int sum;
		
		void Add(){
			sum = a1 + a2;
		}
		void Display(){
			cout<<"Sum is: "<<sum<<" and a1 = "<<a1<<" and a2 = "<<a2<<endl;
		}
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
	obj.set_a1(i);
	obj.set_a2(j);
	obj.Add();
	obj.Display();
	return 0;
}
