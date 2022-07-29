#include<stdio.h>
#include<string.h>

char stack[50];
int top = -1;

void push(char a)
{
	stack[top++] = a;
}

char pop()
{
	top = top - 1;
	return(stack[top]);
}

int main()
{
	char string[30];
	int i ,count = 0,len;
	
	printf("Enter a string : ");
	scanf("%s", string);
	
	len = strlen(string);
	
	for(i=0;i<len;i++){
		
		push(string[i]);	
	}

	for(i = 0; i<len; i++)
	{
		if(string[i] == pop())
			count++;
	}
	if(count == len)
		printf("String is palindrome.");
	else
		printf("String is not a palindrome");

}
