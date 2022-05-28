#include<iostream>
#include<conio.h>
using namespace std;
// Class Starts
class Employee{
	
	private:
		int age;
		int salary;
		string name;
		
	public:
		void get_data();
		void put_data();
};

//Function get_data() written to get input
void Employee :: get_data(){
	cout<<"Enter the name: ";
	cin>>name;
	cout<<"Enter your age: ";
	cin>>age;
	cout<<"Enter your salary: ";
	cin>>salary;
	
}

//function put_data() written to get output
void Employee :: put_data(){
	cout<<"Your Name: "<<name<<endl;
	cout<<"Your Age: "<<age<<endl;
	cout<<"Your salary: "<<salary<<endl;
	cout<<"Thanks for the information."<<endl;
	
}

//main() function starts
int main(){
	
	// Declare an object
	Employee emp;
	emp.get_data();
	cout<<endl;
	emp.put_data();
	getch();
	return 0;
}
