#include<stdio.h>
#include<string.h>
int main()
{
	/*Gets and puts fuction*/
	/*char name[10];
	printf("Enter the name: ");
	gets(name);
	printf("Displayed name is: ");
	puts(name);*/
	
	/* Getchar and putchar function (Displays one char at a time)*/
	/*printf("Enter the char: ");
	char *name_1 = getchar();
	printf("Displayed char:");
	putchar(name_1);*/
		
	/* printf function*/
	/*char *name_3 = "Jaidhev";
	printf("My name is : ");
	puts(name_3);*/
	
	/* atoi function*/
	/*char a[100];
	printf("Enter a number : ");
	gets(a);
	int value = atoi(a);
	printf("Displaying in integer format is: %d", value);*/
	
	/* Strlen function with gets function
	 Way -1 */
	/*char name[20];
	printf("Enter a string: ");
	gets(name);
	int length = strlen(name);
	printf("\n Length of the string is: %d", length);*/
	
	/* Way -2*/
	/*int length = strlen("Welcome");
	printf("Length is: %d", length);*/
	
	/*Way -3*/
	/*char *name = "Welcome to C";
	printf("Length is : %d", strlen(name));*/
	
	/*Using while loop to print the character array(String)*/
	/*char arr[100] = "Hello";
	int i = 0;
	while(arr[i] != '\0')
	{
		putchar(arr[i]);
		i++;
	}*/
	
	/* strcat function 
		Way - 1*/
	/*char str_1[20] = "Jaidhev", str_2[20] = "Anandhev";
	strcat(str_1, str_2);
	printf("After string concatenation string is: %s", str_1);*/
	
	/*Way - 2*/
	/*char str_1[20] = "Jaidhev", str_2[20] = "Anandhev";
	printf("After string concatenation string is: %s", strcat(str_1, str_2));*/	
	
	/* strcmp function */
	/*char str_1[20] = "SAM";
	char str_2[20] = "sam";
	int len = strcmp(str_1, str_2);
	printf("%d", len); /* If both are same it will display 0 else -1*/
	
	/*sprintf function */
	/*int age = 18;
	char name[10];
	sprintf(name, "My age is %s", age);
	puts(name);*/
	
	/* sscanf function*/ 
	/*char buffer[20]= "Welcome_Home";
	char name[20];
	int age = 5;
	sscanf(buffer, "%s %d", name, age);
	printf("Name : %s\n Age: %d\n", name, age);
	*/
	
	/* strstr function */
	/*char name_5[20] = "String upon a String";
	char *a;
	a = strstr(name_5, "String") ;
	if(a) printf("String found. It is =  %s\n", a);
	else printf("Not found");
	*/
	
	/*strrev function*/
	/*char name[] = "Welcome";
	char *reverse = strrev(name);
	printf("Reversed name is : %s", reverse);
	*/
	
	/*strcpy function
	  Way - 1*/
	
	/*char name_1[] = "Hello";
	char name_2[] = "Welcome";
	char *copy = strcpy(name_1, name_2);
	puts(name_1); 
	puts(name_2);*/
	
	 /*Way - 2*/
	/*char ex_1[] = "Hello";
	char ex_2[] = "";
	printf("Ex_1: %s\n", ex_1);
	strcpy(ex_1, ex_2);
	printf("Ex_1: %s", ex_1);
	puts(ex_1);
	puts(ex_2);*/
	
	/* strtok function */
	/*char str[] = "Problem_solving_in_C";
	char *token = strtok(str, "_");
	while(token != '\0')
	{
		printf("%s\n", token);
		token = strtok('\0', "_");
	}*/
	
	return 0;
}


