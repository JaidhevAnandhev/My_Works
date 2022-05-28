//C++ program to determine a gender
#include<iostream.h>
int main()
{
	char gender;
	cout << "Enter a gender:" << endl;
	cin >> gender;

	switch(gender)
	{
		case 'M':
		case 'm':
			cout << "Male." << endl;
			break;

		case 'F':
		case 'f':
			cout << "Female." << endl;
			break;
		default:
			cout << "Invalid Gender." << endl;
	}
	cout<<"Enter x for exit."<<endl;
	cin >> gender;
	return 0;
}
