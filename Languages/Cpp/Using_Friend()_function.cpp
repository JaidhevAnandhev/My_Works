#include<iostream>
using namespace std;
//Class Starts
class Volume{
	
	// Declaring private access speifier
	private:
		int liter = 5;
	
	// Declaring public access speifier
	public:
		Volume(){
			cout<<"Liter is: "<<liter<<endl;
		}
		
		void disp_data(){
			cout<<"Liter at disp_data: "<<liter<<endl;
		}
	
	//Calling friend keyword to use the anywhere outside the class
	friend int multiply(Volume);
};//end of the class

// Calling the friend function (multiply) outside the class that can now access the private access speifier
int multiply(Volume v){
	v.liter *= 5;
	return v.liter;
}


// main() function starts
int main()
{
	Volume vol; // Declaring an Object
	vol.disp_data();//liter = 5
	
	// Declaring using friend function
	cout<<"Liter after using friend function : "<<multiply(vol)<<endl; //liter = 25
	return 0;
	
}
