#include<stdio.h>
int main()
{
	int input[5][5], transpose[5][5], row, column, i, j;
	printf("Enter the number of rows: ");
	scanf("%d", &row);
	printf("Enter the number of columns:");
	scanf("%d", &column);
	
	/*Get the elements for the matrix*/
	printf("Enter the elements for 1st matrix: \n");
	for(i = 0; i<row; i++)
	{
		for(j = 0; j<column; j++)
		{
			printf("Element a%d%d : ", i+1, j+1);
			scanf("%d", &input[i][j]);
		}
	}
	
	/* Assign the the input to the transpose of the matrix*/
	for(i = 0; i<row; i++)
	{
		for(j = 0; j<column; j++)
		{
			transpose[j][i] = input[i][j];
		}
	}
	/*Display the transposed matrix*/
	printf("Transpose of the given matrix is: \n");
	for(i = 0; i<row; i++)
	{
		for(j = 0; j<column; j++)
		{
			printf(" %d ", transpose[i][j]);	
		}
		printf("\n");
	}
	return 0;
}
