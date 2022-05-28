#include<iostream.h>
class Add
{
	public:
		Add(int i = 0)
		{
			total = i;
		}
		 void addNum(int number)
		 {
			total += number;
		 }
		 int getTotal()
		 {
			return total;
		 }
	 private:
		//hidden data
		int total;
};
int main()
{
	Add a;
	a.addNum(10);
	a.addNum(20);
	a.addNum(30);

	cout<<"Total :"<<a.getTotal()<<endl;
	return 0;
}