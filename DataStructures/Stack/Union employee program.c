#include<stdio.h>
union employee
{
	char *name;
	int age;
	int salary;
}emp;
int main()
{
	
	emp.name = "Satish";
	printf("Name : %s\n", emp.name);
	emp.age = 21;
	printf("Age: %d\n", emp.age);
	emp.salary = 25000;
	printf("Salary: %d", emp.salary);
	return 0;
}
