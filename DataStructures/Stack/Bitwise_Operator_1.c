#include<stdio.h>
#include<string.h>
char r[] = "0000000000", s[1<<17], *p=s;
int main()
{
	//printf("1<<17 = (1 * 2^17) = %d",1<<17);
	//int l=76,r=82;
	//printf("Left = %c\nRight =  %c",l,r);
	/*char *r ="111110000001111111100";
	printf("All characters from the first Left side occourence of 0 = %s\n",strchr(r,48));
	printf("First occourence of zero from Right side = %s", strrchr(r,48));
	printf("%d",)*/
	
	
	char nn[100] = "char *mem = (char*)calloc(n,sizeof(char));";
	if(nn[0] == 'c')
		scanf("%*d%s",s);
		/*  INPUT -1
		7
		L0L0LR9*/
		/* INPUT - 2
		8
		LLRL1RL1*/
		printf(" Actual chatacter at first position = %c \n", *p);
		printf(" Convert the char to lower case = %c \n", *p-48);
		printf(" Get the character from the rth position = %c \n",*p-48+r);
		printf(" Check whether the character is LEFT L char = %d \n", *p<76);
		printf("%d %d %d \n","10"[*p<76], "10"[0], "10"[1]);
		
	for(; *p; p++)
	{
		*(*p<76 ? *p-48+r: *p<82 ? strchr(r,48) : strrchr(r,48)) = "10"[*p<76];
		//printf("%c \n",*(*p<76 ? *p-48+r: *p<82 ? strchr(r,48) : strrchr(r,48)));
	   puts(r);
	}
	return 0;
}