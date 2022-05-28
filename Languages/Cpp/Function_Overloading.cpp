#include<iostream>
using namespace std;

// Function oveloading starts
int volume(int);
double volume(double, int);
float volume(double, float, int);

//Declaring the values
int volume(int s){
	return (s*s*s); // Cube
}

double volume(double r, int h){
	return(3.14*r*h); //Cylinder
}
float volume(double l , double b, int h){
	return(l*b*h);//Cuboid
}


int main()
{
	cout<<volume(10)<<endl;
	cout<<volume(20, 20)<<endl;
	cout<<volume(30.5, 30.1, 30)<<endl;
	return 0;
}



