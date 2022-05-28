#include<stdio.h>
int main()
{
	int a[10][10][2], b[10][10][2], mul[10][10][2], r ,c ,i, j, k, l;
	/*Get the rows*/
	printf("Enter the number of rows: ");
	scanf("%d", &r);
	
	/*Get the columns*/
	printf("Enter the number of columns: ");
	scanf("%d", &c);
	
	/*Get the input from set 1*/
	printf("Enter the elements for set 1:\n");
	for(i = 0; i<r; i++)
	{
		for(j = 0; j<c; j++)
		{
			for(k = 0; k<2; k++)
			{
				printf("Element a%d%d: ", i+1, j+1);
			scanf("%d", &a[i][j][k]);
			}
			
		}
	} 
	
	/*Get the input from set 2*/
	printf("Enter the elements for set 2:\n");
	for(i = 0; i<r; i++)
	{
		for(j = 0; j<c; j++)
		{
			for(k = 0; k<2; k++)
			printf("Element b%d%d: ", i+1, j+1);
			scanf("%d", &b[i][j][k]);
		}
	} 
	
	/*Perform the multiplication*/
	for(i = 0; i<r; i++)
	{
		for(j = 0; j<c; j++)
		{
			for(k = 0; k<2; k++)
			{
				mul[i][j][k] = 0;
			for(l = 0; l<r; l++) 
			{
				mul[i][j][k] += a[i][j][l] * b[l][j][k];
			}
			}
			
		}
	}
	
	printf("Answer is: \n");
	for(i = 0; i<r; i++)
	{
		for(j = 0; j<c; j++)
		{
			for(k = 0; k<2; k++)
			printf("%d ", mul[i][j][k]);
		}
		printf("\n\n");
	}
		
}
