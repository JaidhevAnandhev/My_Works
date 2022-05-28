#include<iostream.h>
int main()
{
	time_t tmNow = time(0);
	char * dt = ctime (&tmNow);
	cout<<"Current date and time :"<<dt;
	cout<<endl;
	return 0;
}