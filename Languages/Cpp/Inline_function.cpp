#include<iostream>
using namespace std;

/*// CASE 1
// Inline function starts
inline int add(int a, int b){
	return (a+b);
}
int main(){
	cout<<"Sum of 4 and 4 is: "<<add(4,4)<<endl;
	return 0;
}*/

// CASE 2
class operation{
	
	int a, b;
	public:
		void get_input();
		void sum();
		void sub();
		void mul();
		void div();
}; // end of class

// inline function starts for get_input()
inline void operation :: get_input(){
	cout<<"Enter values for a and  b: "<<endl;
	cin>>a>>b;
}
// inline function starts for sum()
inline void operation :: sum(){
	cout<<"Sum of a + b: "<<(a+b)<<endl;
}
// inline function starts for sub()
inline void operation :: sub(){
	cout<<"Difference  of a - b: "<<(a-b)<<endl;
}
// inline function starts for mul()
inline void operation :: mul(){
	cout<<"Multiplication of a * b: "<<(a*b)<<endl;
}
// inline function starts for div()
inline void operation :: div(){
	cout<<"Division of a / b: "<<(a/b)<<endl;
}

// main() function starts
int main(){
	operation op;
	op.get_input();
	op.sum();
	op.sub();
	op.mul();
	op.div();
	
	return 0;
}
