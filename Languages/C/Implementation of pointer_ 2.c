#include<stdio.h>
struct invent
{
char *name[20];
int  number;
float price;
};
int main()
{
	struct invent product[3], *ptr;
	printf("INPUT\n\n");
	for(ptr = product; ptr < product + 3; ptr++)
		scanf("%s %d %f", ptr->name, &ptr->number, &ptr->price);
	printf("OUTPUT\n\n");	
	ptr = product;
	while(ptr < product+3)
	{
		printf("%s %d %.2f\n");
		ptr->name;
		ptr->number;
		ptr->price;
		ptr++;
	}
	return 0;
}
	


			






