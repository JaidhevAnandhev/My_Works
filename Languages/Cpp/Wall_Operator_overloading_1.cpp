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
		/*Wall(Wall &w1){
			length = w1.length;
			width = w1.width;
		}*/
	
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
		// Operator overload with object and object
		friend int operator + (Wall w1, Wall w2){
			return w1.width + w2.width;
		}
		// Operator overload with integer and object
		friend int operator + (int f_width, Wall w2){
			return f_width + w2.width;
		}
		
		// Operator overload with object and integer
		friend int operator + (Wall w1, int f_2_width){
			return w1.width + f_2_width;
		}
		
		// Operator overload with object and object 
		friend Wall operator * (Wall w1, Wall w2){ // Return type is Wall
			Wall w3;
			w3.length = w1.length * w2.length;
			w3.width = w1.width * w2.width;
			return w3;
		}
			 
		
};
int main()
{
//	Wall w1;
//	w1.set_l_w(10, 20);
//	Wall w2 = w1;
//	w2.calculate_area();
//	w2.display_wall_details();
	
	
	Wall wall_1_obj, wall_2_obj;
	wall_1_obj.set_l_w(5, 7);
	wall_2_obj.set_l_w(6, 8);
	int total_width = wall_1_obj + wall_2_obj;
	cout<<"Total Width after adding object and object: "<<total_width<<endl;
	
	total_width = wall_1_obj.get_width() + wall_2_obj;
	cout<<"Total Width after adding integer and object: "<<total_width<<endl;

	total_width = wall_1_obj + wall_2_obj.get_width();
	cout<<"Total Width after adding object and integer: "<<total_width<<endl;
	
	// Operator overload of multiply object with another object
	Wall w3_obj = wall_1_obj * wall_2_obj;
	w3_obj.calculate_area();
	w3_obj.display_wall_details();
	
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
	
	
	return 0;
	
}
