#include<stdio.h>
int main()
{
	int arr[10],num,i,pos;
	printf("Enter the numbers: \n");
	for(i = 0; i<10 - 1; i++)
		scanf("%d", &arr[i]);
	printf("Enter the position: ");
	scanf("%d", &pos);
	if(pos < 10)
	{
		printf("Enter the number to add: ");
		scanf("%d", &num);
		for(i = 10 - 1; i > pos; i--)
			arr[i] = arr[i-1];
		
		arr[pos] = num;
		printf("Arry now is: \n");
		for(i = 0; i<10;i++)
			printf("%d\n", arr[i]);
	}
	else
		printf("Out of range");
	return 0;
}
