#include<iostream>
using namespace std;
#include<cstring>
//parent class
class Myclass{
	public:
		void myFunction()
		{
		   cout<<"Some content in parent class.";
		}
};
//child class:
class Mychild : public Myclass{
};
 //grandchild class:
class Mygrandchild : public Mychild{
};

int main()
{
	Myclass m_obj;
	m_obj.myFunction();
	cout<<endl;
	Mychild myobj;
	myobj.myFunction();
	return 0;
}
