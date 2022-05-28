#include<iostream>
#include<vector>
using namespace std;

// Class Starts Name of the class
class Area{
	
	// Work to be done in Area() function
	private:
		int length, breadth;
	
	public:
    // Constructor without argument
    Area() : length(5), breadth(2){
    }
    
	public:
	// Constructor with argument
		Area(int l, int b) : length(l), breadth(b){
	}
	
	//Get the length and breadth of the shape
	void get_Input(){
		cout<<"Enter the length and breadth: "<<endl;
		cin>>length>>breadth;
	}
	
	// Calculate the area of the shape
	int Area_Calculation(){
		return length * breadth;
	}
		
	// Display the area of the shape
	Dislpay_Area(int area){
		cout<<"Area of the shape is : "<<area<<endl;
	}
	
}; // end of class

// main() function starts
int main(){
	
	// Declaring an object, here the input is given by the user
	Area a_one;
	
	// Declaring another object with same class name input is already declred(5,2)
	Area a_two(5,2);
	
	// Displaying the output by getting input from the user
	int area_1, area_2;
	
	cout<<"Area of the shape by giving input"<<endl;
	a_one.get_Input();
	area_1 = a_one.Area_Calculation();
	a_one.Dislpay_Area(area_1);
	
	// Displaying the output by already giving the input to the user(5, 2)
	cout<<"Area of the input by pre declared input(5, 2)"<<endl;
	area_2 = a_two.Area_Calculation();
	a_two.Dislpay_Area(area_2);
	
	return 0;
	
}
