#include<stdio.h>
int main()
{
	int arr_1[2][2], arr_2[2][2], sum[2][2], i, j, row, column, transpose[2][2];
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
		
	/* Transpose of the matrix */
	for(i = 0; i < row; i++)
		for(j = 0; j < column; j++)
		{
			transpose[j][i] = arr_1[i][j];
		}
		
	/*Dispaly the transpose of the matrix*/
	printf("Transpose of the given matrix is: \n");
	for(i = 0; i < row; i++)
		for(j = 0; j < column; j++)
		{
			printf("%d ", transpose[i][j]);
			if(j == row-1) printf("\n");
		}
}
