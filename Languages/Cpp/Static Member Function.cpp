#include<iostream>
using namespace std;
// class declaration
class MyClass
{
    // declaration of static data member  
    //count is the class level variable
    public:
        static int count;   // -->this is Data member
    // default constructor
    MyClass()
    {
        // incrementing the count when number of objects are created
        count++;
    }
    // Declaration of static member function
    // This static member function could only access the static Data member of the class
    static int get_count() //--> this is member function
    {
        return count; // It can access only the static data member
    }
};

// Initialising the static variable since it is used only outside the class
int MyClass :: count = 0; 

// Main function starts
int main()
{
    // Without using an object you can directly use the static varible count
    cout<<"Default count of the static variableible is: "<<MyClass :: get_count()<<endl;
    // Now declare some objects
    // Deafult constructor is called
    MyClass class_obj_1, class_obj_2, class_obj_3;
    cout<<"Increment of count variable after declaring one object of the class: "<<MyClass :: get_count()<<endl;
    return 0;
}
