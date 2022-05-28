#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("Enter the vlaue of b: ");
	scanf("%d", &b);
	
	
	/*Relational operator*/
	printf(" a > b =  %d \n", a > b);
	printf(" a < b =  %d \n", a < b);
	printf("a != b =  %d \n", a!= b);
	
	
	/* Conditional operator*/
	int x;
	x = (a < b)?a:b;
	printf("\nBy conditional operator value of x is: %d \n", x);
	getch();
	
	/*Assignment Operator*/
	printf("a+=1 is %d \n", a+=1);
	printf("a-=1 is %d \n", a-=1);
	printf("a*=1 is %d \n", a*=1);
	printf("a/=1 is %d \n", a/=1);
	
	/*Arithmetic Operators*/
	printf("\n Addition of and b: %d \n",    a+b);
	printf("Subtraction of and b: %d \n",    a-b);
	printf("Multiplication of and b: %d \n", a*b);
	printf("Division of and b: %d \n",       a/b);
	
	
	/*Logical Operator*/
	printf("\n Logical And (&&) Operator: %d \n", (a>b)&&(a==b));
	printf("Logical Or (||) Operator: %d \n",     (a<b)||(a>b));
	printf("Logical Not (!) Operator: %d \n",     !(a==b));
	
	/*Sizeof Operator*/
	printf("\n Size of character is: %d \n", sizeof(char));
	printf("Size of Integer is: %d \n",      sizeof(int));
	printf("Size of Float is: %d \n",      	 sizeof(float));
	
	/*Bitwise operator*/
	printf("\n Bitwise And (&) value for a and b is: %d \n", a & b);
	printf("Bitwise Or (|) value for a and b is: %d \n",     a | b);
	printf("Bitwise Not (^) value for a and b is: %d \n",    a ^ b);
	
}
