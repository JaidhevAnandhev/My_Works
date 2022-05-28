#include<stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	
	printf("Argc value : %d ", argc); 
	//  Run the program as D:\C_Programs>Ex-8_If_Else.exe one two
	if(argc == 1)
	{
		printf("You have only one argument. \n");
	}
	else if(argc > 1 && argc < 4)
	{
		printf("Here's your argument : \n");
		for(i = 0; i<argc; i++)
		{
			printf(" %s \n ", argv[i]);
		}
	}
	else
	{
		printf("You have too many arguments.\n");
	}
	return 0;
}
