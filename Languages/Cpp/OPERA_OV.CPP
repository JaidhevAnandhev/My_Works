#include<iostream.h>
//opera_overld refers to operation overloading
class Box
{
	public:
		double getVolume(void)
		{
			return length * breadth * height;
		}
		void setLength(double len)
		{
			length = len;
		}
		void setBreadth(double bre)
		{
			breadth = bre;
		}
		void setHeight(double hei)
		{
			height = hei;
		}
	//overload + operator to add two box operators
	Box operator + (const Box & b)
	{
		Box box;
		box.length = this -> length + b.length;
		box.breadth = this -> breadth + b.breadth;
		box.height = this -> height + b.height;
		return box;
	}
	private:
		double length;
		double breadth;
		double height;
};

//Main function of a program
int main()
{
	Box box1;
	Box box2;
	Box box3;
	double volume = 0.0;

	//box1 specifications
	box1.setLength(6.0);
	box1.setBreadth(7.0);
	box1.setHeight(8.0);

	//box2 specifications
	box2.setLength(12.0);
	box2.setBreadth(13.0);
	box2.setHeight(14.0);

	//Volume of box1
	volume = box1.getVolume();
	cout<<"Volume of Box 1:"<<volume<<endl;

	//Volume of box2
	volume = box2.getVolume();
	cout<<"Volume of Box 2:"<<volume<<endl;

	//Add two Box objects
	box3 = box1 + box2;

	//Volume of box3
	volume = box3.getVolume();
	cout<<"Volume of Box 3:"<<volume<<endl;

	return 0;
}
