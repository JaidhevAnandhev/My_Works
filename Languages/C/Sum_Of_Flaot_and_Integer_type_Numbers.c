#include<stdio.h>
/*We are going to print the sum of flaot and the integer*/
void main()
{
	int i;
	float f;
	float sum;
	printf("Enter an integer: \n");
	scanf("%d", &i);
	printf("Enter a float value: \n");
	scanf("%f", &f);
	sum = i + f;
	printf("\n Sum in flaot type: %f \n", sum);
	printf("Sum in Integer type: %d", sum);
}
