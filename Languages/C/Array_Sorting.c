#include<stdio.h>
void main()
{
	int a[5], i, j, n, temp;
	
	printf("Size: ");
	scanf("%d", &n);
	
	printf("Enter the elements to sort: \n");
	for(i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);	
	} 
	
	
	for(i = 0; i<n; i++)
	{
		for(j = i+1; j<n; j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("Sorted elements are:");
	for(i = 0; i<n; i++)
	{
		printf("\n %d", a[i]);
	}
	
	getch();
}
