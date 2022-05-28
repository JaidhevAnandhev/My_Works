/* Structure using pointers */
#include<stdio.h>
struct Person
{
	int id, age, height, weight;
};
int main()
{
	struct Person *person_ptr, person;
	person_ptr = &person;
	printf("Enter you Id: ");
	scanf("%d", &(*person_ptr).id);
	printf("Enter your age: ");
	scanf("%d", &(*person_ptr).age);
	printf("enter your height: ");
	scanf("%d", &(*person_ptr).height);
	printf("Enter your Weight: ");
	scanf("%d", &(*person_ptr).weight);
	printf("\n");
	printf("Displaying the details\n");
	printf("~~~~~~~~~~~~~\n");
	printf("Your Id number : %d\n", (*person_ptr).id);
	printf("Your Age : %dYears\n", (*person_ptr).age);
	printf("Your Height : %dcm\n", (*person_ptr).height);
	printf("Your weight : %dkg\n", (*person_ptr).weight);
	return 0;
}
