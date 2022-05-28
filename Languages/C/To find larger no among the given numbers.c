#include<stdio.h>
int main()
{
	int size, numbers[100], i, large_no;
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	
	printf("Enter the elements: \n");
	
	
	for(i = 0; i<size; i++)
	{
		scanf("%d", &numbers[i]);
	}
	
	large_no = numbers[0];
	
	for(i = 1; i<size; i++)
	{
		if(large_no < numbers[i])
		{
			large_no = numbers[i];
		}
	}
	printf("Largest number among %d numbers are: %d", size, large_no);
	
	return 0;
}


