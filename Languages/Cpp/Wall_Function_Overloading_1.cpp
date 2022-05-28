#include<iostream>
using namespace std;
class Wall{
	int length, width;
	int area;
	
	public:
		// Default constructor
		Wall(){
			length = 10;
			width = 10;
		}
		// Constructor with one argument
		Wall(int l){
			length = l;
			width = 10;
		}
		// Constructor with two arguments
		Wall(int l, int w){
			length = l;
			width = w;
		}
		// 
		void set_l_w(int l, int w){
			length = l;
			width = w;
		}
		int get_width(){
			return width;
		}
		void calculate_area(){
			area = length * width;
		}
		void display_wall_details(){
			cout<<"Wall's length is: "<<length<<", width is: "<<width<<" and Area is: "<<area<<endl;
		}
		// Function overlaod with one argument
		void calculate_area_and_display_details(int f_len){
			cout<<endl<<"Function with one argument Length is: "<<f_len<<endl;
			cout<<"Area: "<<(f_len * width)<<endl;
		}		
		// Function overlaod with one argument but different data type
		void calculate_area_and_display_details(Wall w1){
			cout<<endl<<"Function with one argument Length is: "<<w1.length<<" and width is: "<<w1.width<<endl;
			cout<<"Area: "<<(w1.length * w1.width)<<endl;
		}
		
		// Function overlaod with two arguments
		void calculate_area_and_display_details(int f_len, int f_width){
			cout<<endl<<"Function with two argument Length is: "<<f_len<<" and width is: "<<f_width<<endl;
			cout<<"Area: "<<(f_len * f_width)<<endl;
		}		
		// Function overlaod with two argument but different data types
		void calculate_area_and_display_details(Wall w1, Wall w2){
			cout<<endl<<"Function with 1st argument Length is: "<<w1.length<<" and width is: "<<w1.width<<endl;
			cout<<"Function with 2nd argument Length is: "<<w2.length<<" and width is: "<<w2.width<<endl;
			cout<<"Area of 1st argument: "<<(w1.length * w1.width)<<endl;
			cout<<"Area of 2nd argument: "<<(w2.length * w2.width)<<endl;
		}	
};
int main()
{

	Wall small, medium(10), large(20, 30);
	small.calculate_area();
	medium.calculate_area();
	large.calculate_area();
	
	cout<<endl<<"Small Wall Details: "<<endl;
	small.display_wall_details();
	cout<<endl<<"Medium Wall Details: "<<endl;
	medium.display_wall_details();
	cout<<endl<<"Large Wall Details: "<<endl;
	large.display_wall_details();
		
	// Function overlaod with one argument
	small.calculate_area_and_display_details(24);
	// Function overlaod with one argument but different data type
	medium.calculate_area_and_display_details(medium);
	// Function overlaod with two arguments
	large.calculate_area_and_display_details(24, 26);
	// Function overlaod with two argument but different data types
	// This will not the data memeber stored in large object just calls for function overloading
	large.calculate_area_and_display_details(small, medium);
	
	
	return 0;
	
}
