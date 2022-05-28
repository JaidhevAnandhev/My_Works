#include<iostream>
using namespace std;
//Class Declaration
class Employee{
	
	public:
		int age;
		int salary;
		string name;
		
	public:
		void get_data();
		void put_data();
}; // end of class

void Employee :: get_data(){
	
	cout<<"Enter your name: ";
	cin>>name;
	cout<<"Enter your age: ";
	cin>>age;
	cout<<"Enter your salary: ";
	cin>>salary;
}

void Employee :: put_data(){
	cout<<"Name: "<<name<<endl;
	cout<<"Age: "<<age<<endl;
	cout<<"Salary: "<<salary<<endl;
}
int main(){
	Employee Manager[1];
	Employee workers[3];
	
	cout<<"Provide Manager Details."<<endl;
	for(int i = 0; i<1; i++){
		Manager[i].get_data();
		cout<<endl;
	}
	
	cout<<endl<<"Provide Workers Detail."<<endl;
	for(int i = 0; i<3; i++){
		workers[i].get_data();
		cout<<endl;
	}
	
	cout<<endl<<"Manager Details: "<<endl;
	for(int i = 0; i<1; i++){
		Manager[i].put_data();
		cout<<endl;
	}

	cout<<endl<<"Worker Details: "<<endl;
	for(int i = 0; i<3; i++){
		workers[i].put_data();
		cout<<endl;
	}
	
	return 0;
	
}
