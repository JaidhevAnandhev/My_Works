#include<stdio.h>
int main()
{
	int a[3][3] = {{1},{2},{4,5}};
	int i, j;
	for(i = 0; i<3; i++)
	{
		for(j = 0; j<2; j++)
		{
			printf("%d ", a[i][j]);
			if(j == 1) printf("\n");
		}	
	}		
	return 0;
}
