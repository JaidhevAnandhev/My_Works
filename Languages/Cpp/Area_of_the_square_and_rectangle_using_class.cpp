#include<iostream>
using namespace std;

// Class starts before main() function
class Shape {
	
	public:
		int side, length, breadth;
	
	public:
		void input(){
			// Get side of a square and (length and breadth) of a rectangle)
			cout<<"Enter the side length of a square: "<<endl;
			cin>>side;
			
			cout<<"Enter the length and breadth of the rectangle: "<<endl;
			cin>>length>>breadth;
	}
	
	// Find the area of square and rectangle using area() function (user defined)
	void area(int s){
			cout<<"Area of the square : "<<(s*s)<<endl;
	}
	void area(int len, int bre){
			cout<<"Area of the rectangle : "<<(len*bre)<<endl;
	}
	// End of the class 
};
// main() function starts
int main(){
	
	// Declare an object Syntax : class_name (object_name)
	Shape shape_obj;
	
	//Calling input() function from the class to get input from the user
	cout<<"Determine the area of Square and rectangle."<<endl;
	shape_obj.input();
	
	// Get the area of Square using area() function
	cout<<"For Square."<<endl;
	shape_obj.area(shape_obj.side);
	
	//Get the area of Square using area() function
	cout<<"For Rectangle."<<endl;
	shape_obj.area(shape_obj.length, shape_obj.breadth);
	
	//exit of main() function
	return 0;
}

