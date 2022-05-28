#include<stdio.h>
int main()
{
	int i, n[10], arr_size;
	printf("Enter the size of the array: ");
	scanf("%d", &arr_size);
	
	printf("Enter the elements: \n");
	for(i = 0; i<arr_size; i++)
	{
		scanf("%d\n", &n[i]);
	}
	printf("The elements are: ");
	for(i = 0; i<arr_size; i++)
	{
		printf("\n%d\n", n[i]);
	}
	return 0;
}
