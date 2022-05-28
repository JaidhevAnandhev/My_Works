//stud_det refers to student details
#include<iostream.h>

struct student
{
	int roll_no;
	int marks;
	char name[50];
}s[2];
int main()
{
	//clrscr();
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"Details of each students."<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	for(int i = 0 ; i<=2 ; i++)
	{
		s[i].roll_no = i + 1;
		cout<<"Enter the roll number :"<<s[i].roll_no<<endl;
		cout<<"Enter the name :"<<endl;
		cin>>s[i].name;
		cout<<"Enter the marks :"<<endl;
		cin>>s[i].marks;
		cout<<"Thanks for entering the information."<<endl;
		cout<<endl;
	}
	//Displaying the information
	for(i = 0 ; i<=2 ; i++)
	{
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<"Displaying the information of each students you have entered."<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<"Student Number : "<<i+1<<endl;
		cout<<"Your Roll Number :"<<s[i].roll_no<<endl;
		cout<<"Your Name :"<<s[i].name<<endl;
		cout<<"Your Marks :"<<s[i].marks<<endl;
	}
	cout<<"Enter x:"<<endl;
	cin>>s[i].name;
	return 0;
}