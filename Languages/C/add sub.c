#include<stdio.h>
int main()
{
	int num1, num2, sum,diff,mul,div,mod,choice;
	printf("Num 1:"); scanf("%d", &num1);
	printf("Num 2:"); scanf("%d", &num2);
	printf("Choice: ");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			sum = num1 + num2;
			printf("Sum is: %d", sum);
			break;
		case 2:
			diff = num1-num2;
			printf("Diff is: %d", diff);
			break;
		
		
	}
	return 0;
}
