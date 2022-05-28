#include<iostream>
using namespace std;
// class declaration
class MyClass
{
    // declaration of static data member  
    //count is the class level variable
    public:
        static int count;   
    // default constructor
    MyClass()
    {
        // incrementing the count when number of objects are created
        count++;
    }
};

// Initialising the static variable since it is used only outside the class
int MyClass :: count = 0; 

// Main function starts
int main()
{
    // Without using an object you can directly use the static varible count
    cout<<"Default count of the static varible is: "<<MyClass :: count<<endl;
    // Now declare some objects
    // Deafult constructor is called
    MyClass class_obj_1, class_obj_2, class_obj_3;
    cout<<"Increment of count varible after declaring one object of the class: "<<MyClass :: count<<endl;
    return 0;
}
