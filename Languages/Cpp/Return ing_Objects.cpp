#include<iostream>
using namespace std;
// Class Declaration
class complex{
		int x;
		int y;
	public:
		void set_values(int f_x, int f_y){
			f_x = x;
			f_y = y;
		}
		complex sum(complex c1, complex c2)	{
			complex c3;
			c3.x = c1.x + c2.x;
			c3.y = c1.y + c2.y;	
			return c3;
		}
		void show(complex c)
		{
			cout<<"X value: "<<c.x<<" and Y value: "<<c.y<<endl;
		}
};

int main()
{
	complex a, b, c;
	cout<<"Giving input value in a function as parameter."<<endl;
	a.set_values(10, 12.6);
	b.set_values(12, 15.8);
	c.sum(a, b);
	c.show(c);
	return 0;
}

