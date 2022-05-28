#include<stdio.h>
int main()
{
	int square, choice, fact = 1, i, n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("1.Square\n");
	printf("2.Factorial\n");
	printf("3.Even odd\n");
	printf("4.Exit\n");
	printf("Enter your choice: \n");
	scanf("%d", &choice);
	
	/*Switch case program starts*/
	switch(choice)
	{
		case 1:
			square = n*n;
			printf("Square of the number is: %d", square);
			break;
		
		case 2:
			for(i = 1; i<=n; i++)
			{
				fact = fact * i;
			}
			printf("Factorial of %d is %d", n, fact);
			break;
		
		/*Nested switch case program*/
		case 3:
		{
			switch(n%2)
			{
				case 0:
					printf("The number is even.");
					break;
				case 1:
					printf("The number is Odd.");
			}
		}
		case 4:
			exit(0);
		default:
			printf("Please enter a valid number.");
	}
	return 0;
}








