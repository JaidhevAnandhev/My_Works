#include<stdio.h>
struct Employee
{
	char name[20], address[50];
	int age, salary;
}emp[5];
int main()
{
	printf("Enter the people deatils\n");
	int i, avg = 0;
	for(i = 1; i<=2; i++)
	{
		printf("Employee name %d :\n", i);
		scanf("%s", emp[i].name);
		printf("Address of Employee %d :\n", i);
		scanf("%s", emp[i].address);
		printf("Age of employee %d :\n", i);
		scanf("%d", &emp[i].age);
		printf("Salary of employee %d :\n", i);
		scanf("%d", &emp[i].salary);
	}
	for(i = 1; i<=5; i++)
	{
		avg = avg + emp[i].salary;
	}
	printf("~~~~~~~~~~~~~~~\n");
	printf("Displaying the employee details\n");
	printf("~~~~~~~~~~~~~~~\n");	
	
	for(i = 1; i<=2; i++)
	{
		printf("Name of Employee %d: %s\n", i, emp[i].name);
		printf("Addressof Employee %d: %s\n", i, emp[i].address);
		printf("Age of Employee %d: %d\n", i, emp[i].age);
		printf("Salary of Employee %d: %d\n", i, emp[i].salary);
	}
	printf("Average of salary: %d", avg/2);
	return 0;
}
