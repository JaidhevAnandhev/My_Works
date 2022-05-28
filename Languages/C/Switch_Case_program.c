#include<stdio.h>
int main()
{
	int number;
	printf("Enter a number between 1 and 5: ");
	scanf("\n%d", &number);
	
	
	/*Switch case program*/
	switch(number)
	{
		case 1: /* If you print 1.*/
			printf("You have printed number 1.\n");
			break;
		case 2: /* If you print 2.*/
			printf("You have printed number 2.\n");
			break;
		case 3: /* If you print 3.*/
			printf("You have printed number 3.\n");
			break;
		case 4: /* If you print 4.*/
			printf("You have printed number 4.\n");
			break;
		case 5: /*If you print 5.*/
			printf("You have printed number 5.\n");
			break;
		/* Default is optional part*/
		default:
			printf("\nPrint a valid number between 1 and 5.");
	}
	return 0;
}
