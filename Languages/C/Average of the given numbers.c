#include<stdio.h>
int avg()
{
	int num[100], size, i, sum = 0;
	float avg;
	printf("Enter the size: ");
	scanf("%d", &size);
	printf("Enter the elements: \n");
	for(i = 0; i<size; i++)
		scanf("%d", &num[i]);
	for(i = 0; i<size; i++)
		sum += num[i];
	avg = sum / size;
	return avg;
}
int main()
{
	float average;
	average = avg();
	printf("Average = %.2f", average);
	return 0;
}
