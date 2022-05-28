#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>

void error_msg(const char *message)/* perror accepts input parameter as const type only*/
{
	if(errno)
		perror(message);
	else
		printf("Error : %s", message);
	
	exit(1);
}

/* Declaring a function pointer, also pass as parameter to an another function*/
typedef int(*compare_cb)(int a_1, int a_2);

int *bubble_sort(int *numbers, int count, compare_cb cmp)
{
	int temp = 0;
	int i, j = 0;
	int *target = malloc(count * sizeof(int));
	
	if(!target)
		error_msg("Memory error.");
	
	
	memcpy(target, numbers, count * sizeof(int));
	
	/* Compare the values and swap accoring to  the sorting order*/
	for(i = 0; i<count; i++)
	{
		for(j = 0; j<count-1; j++)
		{
			/* compare the 1st value and it's next value , if it's greater than zero then swap the numbers*/
			if(cmp(target[j], target[j+1]) > 0)
			{
				temp = target[j+1];
				target[j+1] = target[j];
				target[j] = temp;
			}	
		}
	}
	return target;	

}

int sorted_order(int a, int b)
{
	return a-b;
}
	
int reverse_order(int a, int b)
{
	return b-a;
}

void sorted(int *numbers, int count, compare_cb cmp)
{
	int i = 0;
	int *sorted = bubble_sort(numbers, count, cmp);
	
	if(!sorted)
		error_msg("Failed to sort.");
	
	for(i = 0; i<count; i++)
		printf("%d\t", sorted[i]);
}

int main(int argc, char *argv[])
{
	printf("argc = %d \n", argc);
	printf("argv array values are as below : \n");
	printf("============================== : \n");
	int i = 0;
	int count = argc;
	for(i = 0; i<count; i++)
		printf("argv arguments = %s \n", argv[i]);
	
	/* Ignore the first argument which is the current program name. 
		So assign the second actual argument's memory address to the inputs. 
		and update the count variable accordingly. */
	char **inputs = argv + 1;
	count = count - 1;	
	
	int *numbers = malloc(count * sizeof(int));
	
	for(i = 0; i < count; i++)
	{
		numbers[i] = atoi(inputs[i]);	
		printf("\n%d\t", numbers[i]);
	}
	
	sorted(numbers, count, sorted_order);
	sorted(numbers, count, reverse_order);
		
	return 0;
}
