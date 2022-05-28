#include<iostream>
using namespace std;

// Class starts 
class Cuboid{
	
	public:
	//Declaring variables
		double length;
		double breadth;
		double height;
		
	// Returns the volume when this function is being called
	double Get_Volume(){
		return length * breadth * height;
	}
	
	// Set the length
	void set_Length(double l){
		length = l;
	}
	
	// Set the breadth
	void set_breadth(double b){
		breadth = b;
	}
	
	// Set the height
	void set_height(double h){
		height = h;
	}
	
	// Operator overloading starts Syntax: class_name operator +, -, *, / (any one operator) (class_name object_name) // Don't use this object_name in main() function.
	
	Cuboid operator + /*(+) */ (Cuboid c){
	Cuboid cuboid;// Used to get length, Breadth and Heigtht using operator overloading
	cuboid.length = this-> length + /*(+) */ c.length;
	cuboid.breadth = this-> breadth + /*(+) */ c.breadth;
	cuboid.height = this-> height + /*(+) */ c.height;
	return cuboid;
	}
	
}; // end of the class

int main(){
	
	//Declaring Object name (Don't use the object name that is previously used)
	Cuboid c1; // For Cuboid 1
	Cuboid c2; // For Cuboid 2
	Cuboid c3; // For Cuboid 1 + Cuboid 2
	
	//Declaring the input for Cuboid 1 in the program
	c1.set_Length(2.5);
	c1.set_breadth(3.5);
	c1.set_height(4.5);
	
	cout<<"Volume of Cuboid 1 is: "<<c1.Get_Volume()<<endl;
	
	//Declaring the input for Cuboid 2 in the program
	c2.set_Length(5.5);
	c2.set_breadth(6.5);
	c2.set_height(7.5);
	cout<<"Volume of Cuboid 2 is: "<<c2.Get_Volume()<<endl;
	
	// Addition of Length, Breadth, Height of Cuboid 1 and 2 gives Cuboid 3
	c3 = c1 + c2;
	cout<<"Length of cuboid 3 is : "<<c3.length<<endl;
	cout<<"Breadth of cuboid 3 is : "<<c3.breadth<<endl;
	cout<<"Height of cuboid 3 is : "<<c3.height<<endl;
	
	cout<<"Volume of Cuboid 3 is: "<<c3.Get_Volume()<<endl;
	
	return 0;
}
