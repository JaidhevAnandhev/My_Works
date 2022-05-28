#include<iostream>
using namespace std;
class Circle{
	int radius, diameter;
	public:
		Circle(){
			radius = 10;
			diameter = 20;
		}
		// Constructor with parameters
		Circle(int r, int d){
			radius = r;
			diameter = d;
		}
		// Copy constructor
		Circle(Circle &c1){
			radius = c1.radius;
			diameter = c1.diameter;
		}
		//Operator overloading
		friend Circle operator * (Circle c1, Circle c2)
		{
			Circle c3;
			c3.radius = c1.radius * c2.radius;
			c3.diameter = c1.diameter * c2.diameter;
			return c3;
		}
		int get_Radius(){
			return radius;
		}
		
		//Function overloading (int, int)
		void Add_Radius(int r, int r1){
			radius = r + r1;
		}
		//Function overloading (int, Circle object)
		void Add_Radius(int r, Circle c1){
			radius = r + c1.radius;
		}
		//Function overloading (Circle object, int)
		void Add_Radius(Circle c1, int r1){
			radius = c1.radius + r1;
		}
		//Function overloading (Circle object, Circle object)
		void Add_Radius(Circle c1, Circle c2){
			radius = c1.radius + c2.radius;
		}
		
		
		void Display_Circle(){
			cout<<"Radius: "<<radius<<" and Diameter: "<<diameter<<endl;
		}
		
};

int main()
{
	Circle c1(10, 20);
	cout<<"Display Circle 1: ";
	c1.Display_Circle();
	

	Circle c4(30, 40);
	// Copy c1 object  (all members of c1) into c2 object (assign to all members of c2)
	Circle c2 = c1;
	cout<<"Display Circle 2: ";
	c2.Display_Circle();
	
	//Operator overloading (passing object as parameter) will not execute when there is copy constructor
	/*Circle c_3 = c1 * c4;
	c_3.Display_Circle();*/

	Circle c3;
	cout<<"Display Circle 3 after default constructor: ";
	c3.Display_Circle();	
	
	c3.Add_Radius(c1.get_Radius(), c2.get_Radius());
	cout<<"Display Circle 3 after function overloading (int, int): ";
	c3.Display_Circle();
	
	c3.Add_Radius(c1.get_Radius(), c2);
	cout<<"Display Circle 3 after function overloading (int, Circle object): ";
	c3.Display_Circle();
	
	c3.Add_Radius(c1, c2.get_Radius());
	cout<<"Display Circle 3 after function overloading (Circle object, int): ";
	c3.Display_Circle();
	
	c3.Add_Radius(c1, c2);
	cout<<"Display Circle 3 after function overloading (Circle object, Circle object): ";
	c3.Display_Circle();
	
	return 0;
}

