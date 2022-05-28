#include<iostream>
using namespace std;
class Add
{
	int a, b;
	float d, e;
	public:
		// Declaring the constructor
		Add()
		{
			cout<<"Enter value of a = ";
			cin>>a;
			cout<<"Enter value of b = ";
			cin>>b;
			int sum = a+b;
			cout<<"Sum = "<<sum<<endl;
		}
		sum(int a, int b);
		
};
	Add :: sum(int f_a, int f_b)
	{
		f_a = a;
		f_b = b;
		return 0;
	}
		
int main()
{
	Add add_obj;
	add_obj.sum(10,24);
	return 0;
}
