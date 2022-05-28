#include<iostream>
using namespace std;
class Ptr_To_Member{
	public:
		int a;
	public:
		void get_values(int f_a){
			f_a = a;
			cout<<"Enter the value of a : "<<endl;
			cin>>a;
		}
		void show(int b){
			cout<<"Value of b is: "<<b<<endl;
		}
};

int main(){
	// Declaring pointer to data member
	int Ptr_To_Member ::* ip = &Ptr_To_Member :: a;
	
	// Declaring pointer to member function
	void (Ptr_To_Member ::* fp) (int) = & Ptr_To_Member :: show;
	
	//Declare an object
	Ptr_To_Member ptr_obj;
	
	//Initialising the pointer of data member
	ptr_obj .* ip = 10;
	
	cout<<"Value of a is: "<<ptr_obj .* ip<<endl;
	(ptr_obj .* fp) (200);
	return 0;
}


