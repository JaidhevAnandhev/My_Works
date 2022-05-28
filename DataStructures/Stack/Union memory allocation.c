#include<stdio.h>
union work
{
	char name[40];
	int emp_no;
	float salary;
}u;

int main()
{
	printf("Enter name: ");
	scanf("%s", u.name);
	printf("Enter Salary: ");
	scanf("%f", &u.salary);
	printf("Size of name: %d \nSize of salary: %d", sizeof(u.name), sizeof(u.salary));
	printf("\nName : %s\nSalary : %.2f", u.name, u.salary);
	return 0;	
}
