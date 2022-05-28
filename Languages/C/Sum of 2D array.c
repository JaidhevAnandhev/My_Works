#include<stdio.h>
int main()
{
	int arr_1[2][2], arr_2[2][2], sum[2][2], i, j, row, column;
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
		
	/*Sum of the two matrix*/
	for(i = 0; i < row; i++)
		for(j = 0; j < column; j++)
		{
			sum[i][j] = arr_1[i][j] + arr_2[i][j];
		}
	
	/*Displaying the result(Sum of the two matrix)*/
	printf("Sum of the two matrix is: \n");
	for(i = 0; i < row; i++)
		for(j = 0; j < column; j++)
		{
			printf("%d  ", sum[i][j]);
			if(j == column-1) printf("\n");
		}
} 
