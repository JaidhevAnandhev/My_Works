#include<stdio.h>
struct student
{
	char name[20];
	int roll;
	int mark;
};

int main()
{
	struct student name_1, r_no, score;
	printf("Enter your name: ");
	scanf("%s", &name_1.name);
	printf("Enter you roll number: ");
	scanf("%d", &r_no.roll);
	printf("Enter your marks: ");
	scanf("%d", &score.mark);
	printf("~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Name: %s\n", name_1.name);
	printf("Marks: %d\n", r_no.roll);
	printf("Score: %d", score.mark);
	return 0;
}

