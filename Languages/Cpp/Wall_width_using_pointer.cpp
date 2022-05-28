#include<iostream>
using namespace std;
class Wall{
	int width;
	Wall *another_Wall; // Pointer variable of type Wall class
	
	public:
		Wall(){
			another_Wall = NULL; // Pointer initialisation
		}
		void set_width(){
			cout<<"Enter a width: ";
			cin>>width;
		}
		void display_width(){
			cout<<"Width is: "<<width<<endl;
		}
		
		// Pointer function parameter
		void set_next_wall(Wall *where_to_point){
			another_Wall = where_to_point;
		}
		
		// Pointer method
		Wall *get_next_wall(){
			return another_Wall;
		}
};
int main(){
	Wall Small, Medium, Large;
	
	cout<<"Prepare Small object."<<endl;
	Small.set_width();
	
	cout<<"Prepare Medium object."<<endl;
	Medium.set_width();
	
	cout<<"Prepare Large object."<<endl;
	Large.set_width();
	
	// Wall Pointer
	Wall *wall_point;
	
	wall_point = &Small; // Wall Pointer initialisation
	cout<<"Display Small Wall's width."<<endl;
	wall_point->display_width();
	cout<<endl;
	
	wall_point = &Medium;
	cout<<"Display Medium Wall's width."<<endl;
	wall_point->display_width();
	cout<<endl;
	
	wall_point = &Large;
	cout<<"Display Large Wall's width."<<endl;
	wall_point->display_width();
	
	Large.set_next_wall(&Small);
	wall_point = wall_point->get_next_wall();
	cout<<"Large's another Wall points to small and now it's Width is: ";
	wall_point->display_width();
	
	Small.set_next_wall(&Medium); // Set pointer variable
	wall_point = wall_point->get_next_wall(); // Call Pointer method and return pointer's value which is of type  Wall Class
	cout<<"Small's another Wall points to medium and now it's Width is: ";
	wall_point->display_width();
	
	Medium.set_next_wall(&Large);
	wall_point = wall_point->get_next_wall();
	cout<<"Medium's another Wall points to large and now it's Width is: ";
	wall_point->display_width();
	
	
	
	return 0;	
}
