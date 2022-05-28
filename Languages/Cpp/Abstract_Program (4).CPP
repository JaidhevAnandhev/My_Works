#include<iostream.h>
//Jaidhev is creating his abstract class by his own!!!
class Electricals
{       public:
	virtual void Radio() = 0;
	void Oven()
	{
		cout<<"I am a Microwave Oven from base class."<<endl;
	}
};
//Derived class
class Laptop : public Electricals
{
	public:
	void Radio()
	{
		cout<<"I am a Radio"<<endl;
	}
	void cpu()
	{
		cout<<"This laptop has Intel core processor."<<endl;
	}
	void Graphics()
	{
		cout<<"This laptop has NVIDIA graphics processor"<<endl;
	}
};
//Main program starts
int main()
{
	Electricals *elec;//pointer
	Laptop lapObj;//Object
	elec = &lapObj;//pointer points to lapObj address
	elec -> Radio();
	elec -> Oven();

	Laptop *lapPoint;//pointer
	lapPoint = &lapObj;//pointer points to lapObj address
	lapPoint -> cpu();
	lapPoint -> Graphics();
	return 0;
}


