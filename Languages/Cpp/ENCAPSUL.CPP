#include<iostream.h>
//Base class
class Shape
{
	protected:
		int length;
		int breadth;
	public:
		void setLength()
		{
			float len;
			length = len;
		}
		void setBreadth()
		{
			float bre;
			breadth = bre;
		}

};
class Rectangle : public Shape
{
	public:
		void setLength() : setBreadth()
		{
			return len * bre;
			cout<<"Area:"<<endl;
		}
};
int main()
{
       Rectangle rect;
       rect.setLength();
       rect.setBreadth();
       return 0;
}