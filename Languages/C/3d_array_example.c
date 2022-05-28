#include<stdio.h>
int main()
{
	int a[2][3][2], i, j, k ;
	
	/*Get the elements from the user*/
	for(i = 0; i<2; i++)
		for(j = 0; j<3; j++)
			for(k = 0; k<2; k++)
				{
					printf("a[%d][%d][%d]: ", i, j, k);
					scanf("%d", &a[i][j][k]);
				}
			
	/*Display the elements from the user*/
	for(i = 0; i<2; i++)
		for(j = 0; j<3; j++)
			for(k = 0; k<2; k++){
				printf("The array elements are: \n");
				printf("a[%d][%d][%d]: %d \n", i, j, k, a[i][j][k]);		
			}	
	return 0;
}
