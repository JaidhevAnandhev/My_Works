#include<iostream>
using namespace std;
class Set{
	
	private:
		int a, b;
	public:
		void input();
		int largest();
		void display();
};

int Set :: largest(){
	if(a > b)
		return a;
	else
		return b;	
} 

void Set :: input(){
	cout<<"Enter two numbers: "<<endl;
	cin>>a>>b;
}

void Set :: display(){
	cout<<"Largest number is: "<<largest()<<endl;
}
	

//main() function starts
int main(){
	Set obj;
	obj.input();
	obj.display();
	return 0;
}

