#include<iostream>
using namespace std;

// Class Starts Name of the class is Circle
class Circle{
	public:
		int radius, diameter;
		
	public:
		void circle(){
			// Inside the constructor
			cout<<"Inside the constructor."<<endl;
			radius = 2;
			diameter = 	(radius + radius);
			cout<<"Radius of the circle : "<<radius<<endl;
			cout<<"Diameter of the circle : "<<diameter<<endl;
		}
		
	public:
		 ~Circle(){
			//Inside the destructor
			cout<<"Inside the destructor."<<endl;
		}
			
}; //end of the class

// main() function starts
int main(){
	
	// Declare an object 
	Circle c_obj;
	
	// Display the output declared in circle() function
	cout<<"Radius and diameter of a circle."<<endl;
	c_obj.circle();
	c_obj.~Circle();
	
	// Return of main() function
	return 0;
}


