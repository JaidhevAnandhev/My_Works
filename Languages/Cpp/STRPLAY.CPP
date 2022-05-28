#include<iostream.h>
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "12345";
	char arr_1[] = arr[3];
	cout<<arr_1;
	const char *str = "12345"; //arr[3] + arr[4] + arr[5];
	int x;
	sscanf(str, "%d", &x); //interpolation
	cout<<x;
	return 0;
}