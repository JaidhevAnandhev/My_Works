#include<stdio.h>
int main()
{
	int a = 10 , b = 20;
	printf("Bitwise AND operator: %d \n", 			(a & b));
	printf("Bitwise OR operator: %d \n", 			(a | b));
	printf("Bitwise XOR operator: %d \n", 			(a ^ b));
	printf("Bitwise NOT operator for a  = %d, for b = %d \n", (~a), (~b));
	printf("Bitwise Shift left operator for a =  %d for b = %d\n ",(a << 2), (b << 2));
	printf("Bitwise Shift right operator for a =  %d for b = %d\n", 	(a >> 2), (b >> 2));
	return 0;
}
