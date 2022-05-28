#include<stdio.h>
void main()
{
	float farenhiet, celsius;
	printf("Enter the temperature in Celsius: ");
	scanf("%d", &celsius);
	
	farenhiet = (celsius * 9 / 5) + 32;
	printf("Temperature in celsius = %d", farenhiet);
}
