#include<iostream>
using namespace std;
class nest
{
		int a;
		int sq_num()
		{
				return a * a;
		}
		public:
				void input_num()
				{
						cout<<"\nEnter a number :"<<endl;
						cin>>a;
				}
		int cube_num()
		{
				return a * a * a;
		}
		void disp_num()
		{
				int sq = sq_num();
				int cu = cube_num();
				cout<<"Squre of "<<a<<" is :"<<sq<<endl;
				cout<<"Cube of "<<a<<" is :"<<cu<<endl;
				cout<<endl;
		}

};
int main()
{
		nest n1;
		n1.input_num();
		n1.disp_num();
		return 0;
}
