#include<stdio.h>
int main()
{
	int a[10][10], b[10][10], sum[10][10];
	int i, j, r, c;
	
	/*Get the rows*/
	printf("Enter the number of rows: ");
	scanf("%d", &r);
	
	/*Get the columns*/
	printf("Enter the number of columns: ");
	scanf("%d", &c);
	
	/*Get the input from the user*/
	printf("Enter the elements of set 1:\n");
	for(i = 0; i < r; ++i)
		for(j = 0; j < c; ++j){
			printf("Element a%d%d: ", i+1, j+1);			
			scanf("%d", &a[i][j]);
		}
		
	printf("Enter the elements of set 2:\n");
	for(i = 0; i<r; ++i)
		for(j = 0; j<c; ++j)
		{
			printf("Element b%d%d: ", i+1, j+1);			
			scanf("%d", &b[i][j]);
		}
	
	/*Perform  the addition*/
	printf("Performing the addition for two matrix\n");
	for(i = 0; i<r; ++i)
		for(j = 0; j<c; ++j)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
		
	/*Displaying the output*/
	printf("Answer is");
	for(i = 0; i<r; ++i)
		for(j = 0; j<c; ++j)
		{
			printf("%d  ", sum[i][j]);
			if(j == c-1){
				printf("\n\n");
			}
		}
	
	return 0;
}
