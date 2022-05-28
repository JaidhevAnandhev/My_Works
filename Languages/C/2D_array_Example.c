#include<stdio.h>
int main()
{
	int a[3][2], i, j;
	/*Get the elements from the user*/
	for(i = 0; i<3; i++)
	{
		for(j = 0; j<2; j++)
		{
			printf("Element a [%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	/*Displaying the element using for loop*/
	for(i = 0; i<3; i++)
	{
		for(j = 0; j<2; j++)
		{
			
			printf("%d  ", a[i][j]);
			if(j == 1) printf("\n");
		}	
	}
	
}
