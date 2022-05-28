#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	int n1, n2, lcm;
	cout << "Enter Number 1:" << endl;
	cin >> n1;
	cout << "Enter Number 2:" << endl;
	cin >> n2;

	if( n1<=0 || n2<=0 )
	{
		cout << "Invalid input." << endl;
		return 0;
	}

	lcm = (n1>n2) ? n1 : n2;
	while(1)
	{
		if((lcm % n1 == 0) && (lcm % n2 == 0))
		{
			cout << "Both can have the lunch on the same day. " << lcm << endl;
			break;
		}
		lcm++;
	}
	cout << "Enter x for exit." << endl;
	cin >> lcm;
	return 0;
}

