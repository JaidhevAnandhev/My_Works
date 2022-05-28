#include<stdio.h>
int main()
{
	int arr_1[2][2], arr_2[2][2], mul[2][2], i, j, k, row, column;
	printf("Enter the number of rows: ");
	scanf("%d", &row);
	printf("Enter the number of columns: ");
	scanf("%d", &column);
	
	/*Get the elements from the user*/
	printf("Get the elements for 1st matrix \n");
	for(i = 0; i < row; i++)
		for(j = 0; j < column; j++)
		{
			printf("Element arr_1[%d][%d]: ", i, j);
			scanf("%d", &arr_1[i][j]);
		}
		
	printf("Get the elements for 2nd matrix \n");
	for(i = 0; i < row; i++)
		for(j = 0; j < column; j++)
		{
			printf("Element arr_2[%d][%d]: ", i, j);
			scanf("%d", &arr_2[i][j]);
		}
		
	/* Multiply the matrix */
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < column; j++)
		{
			mul[i][j] = 0;
			for(k = 0; k < column; k++)
			{
				mul[i][j] += arr_1[i][k] * arr_2[k][j];
			}
		}	
	}
		
		
	/*Display the matrix*/
	printf("Product is: \n");
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < column; j++)
		{
			printf("%d\t", mul[i][j]);
			if(j == column - 1)	
			{
				printf("\n");
			}
		}
	}
		
	return 0;
}
		
	
