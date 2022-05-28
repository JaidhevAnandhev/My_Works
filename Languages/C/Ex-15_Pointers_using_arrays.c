#include<stdio.h>

int main(int argc, char *argv[])
{
	
	int i = 0;
	int age[] = {21, 31, 41, 51, 61};
	int count = sizeof(age)/sizeof(int);
	printf(" Size of age = %d, Size of int = %d and count = %d \n",sizeof(age), sizeof(int), count);
	
	char *name[] = {"Kumar", "Arun", "Sai", "Kiran", "Naveen"};
	
	// pointer variable declaration and assign the base address of an array
	char **cur_name = name;
	int *cur_age = age;
	
	// 1st approach to read using pointer variable
	printf("\n First approach to read using pointer variable");
	for(i = 0; i<count; i++)
		printf("\n Name = %s and Age = %d ",*(cur_name + i), *(cur_age + i));
	
	// 2nd approach to read using pointer variable
	printf("\n\n Second approach to read using pointer variable");
	for(i = 0; i<count; i++)
		printf("\n Name = %s and Age = %d ", cur_name[i], cur_age[i]);
		
	// 3rd approach to read using pointer variable
	printf("\n\n Third approach to read using pointer variable");
	for(cur_age = age, cur_name = name;
		(cur_age - age) < count; 
			cur_age++, cur_name++)
		printf("\n Name = %s and Age = %d and name address is: %p and age address is: %p", *cur_name, *cur_age, cur_name, cur_age);
	
	// Sample for assign the pointer variable using non-array variable
	int num = 3;
	float fl_num = 4.56;
	int *ptr_num = &num; 
	float *ptr_fl_num = &fl_num;
	printf("\n\n Pointer integer value is: %d and it's address is: %p", *ptr_num, ptr_num);
	printf("\n\n Pointer Float value is : %.2f and it's address is : %p", *ptr_fl_num, ptr_fl_num);
	
	
	return 0;
}
