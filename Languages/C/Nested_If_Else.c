#include<stdio.h>
int main()
{
	int password;
	char username;
	printf("Enter your username as a single character: ");
	scanf("%c", &username);
	printf("Enter your password: ");
	scanf("%d", &password);
	if(username == 'a')
	{
		if(password == 12345)
		{
			printf("Your username and passsword are correct.");
		}
		else
		{
			printf("Your password is incorrect");
		}
	}
	else
	{
		printf("Your username is incorrect.");
	}
	return 0;
}
