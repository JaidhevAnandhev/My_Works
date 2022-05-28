#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

void err_msg(const char *message)
{
	if(errno)
		perror(message);
	else
		printf("Error : %s", message);
}

/*Function pointer declaration*/
typedef int (*compare_cb)(int a, int b);

/* Using this function as a parameter to another function*/
int *bubble_sort(int *numbers, int count, compare_cb cmp) /*cmp is the reference to the function pointer*/
{
	int temp = 0;
	int i, j = 0;
	
	int *target = malloc(count * sizeof(int));
	
	if(!target)
		err_msg("Memory error.");
		
	memcpy(target, numbers, count * sizeof(int));
	
	for(i = 0; i<count; i++)
	{
		for(j = 0; j<count-1; j++)
		{
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

void sorted_test(int *numbers, int count, compare_cb cmp)
{
	int i = 0;
	int *sorted = bubble_sort(numbers, count, cmp);
	
	if(!sorted)
		err_msg("Not sorted in order.");
	
	for(i = 0; i<count; i++)
		printf("%d ", sorted[i]);
}

int main(int argc, char *argv[])
{
	if (argc < 2)
		err_msg("Print atleast 4 or more value for sorting.");
		
	int count = argc - 1;
	int i = 0;
	char **input = argv + 1;
	int *numbers  = malloc(count * sizeof(int));
	
	for(i = 0; i < count; i++)
		numbers[i] = atoi(input[i]);
		
	printf("Sort in ascending order: \n");
	sorted_test(numbers, count, sorted_order);
	
	printf("\n Sort in descending order: \n");
	sorted_test(numbers, count, reverse_order);
	
	return 0;
}
