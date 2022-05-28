#include<iostream.h>
class Animal
{
	public:
		virtual void sound() = 0; //Pure virtual function created

		void sleep()
		{
			cout<<"Sleeping"<<endl;
		}
};
//Derived class
class Cat : public Animal
{
	public:
		void sound()
		{
			cout<<"It Meows !"<<endl;
		}
		void sleep()
		{
			cout<<"Cat is Sleeping"<<endl;
		}
};
int main()
{
	Animal *cat;
	Cat catObj;
	cat = &catObj;
	cat -> sleep();
	cat -> sound();
	return 0;
}

