/* Circularly linked list */
#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

struct Node* add_at_empty(int data)
{
	struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
	temp->data = data;
	temp->next = temp;
	return temp;
}

struct Node* add_at_beg(struct Node *tail, int data)
{
	struct Node* newP = (struct Node*)malloc(sizeof(struct Node));
	newP->data = data;
	newP->next = tail->next;
	tail->next = newP;
	return tail;
}

struct Node* add_at_end(struct Node *tail, int data)
{
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = data;
	temp->next = NULL;
	temp->next = tail->next;
	tail->next = temp;
	tail = temp;
	
	return tail;
	
}

struct Node* add_at_pos(struct Node* tail, int data, int pos)
{
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = data;
	//temp->next = NULL;
	struct Node *ptr = tail->next;
	struct Node *ptr2 = NULL;
	pos--;
	while(pos != 1)
	{
		ptr = ptr->next;
		pos--;
	}
	
   	temp->next = ptr->next;
   	ptr->next = temp;

	return tail;
	
}

struct Node* del_first(struct Node *tail)
{
	struct Node *ptr = tail->next;
	tail->next = ptr->next;
	ptr->next = NULL;
	free(ptr);
	ptr = NULL;
	return tail;
	
}

struct Node* del_last(struct Node *tail)
{
	struct Node *temp = tail->next;
	if(tail->next == tail)
	{
		free(tail);
		tail = NULL;
		return tail;
	}
	while(temp->next != tail)
	{
		temp = temp->next;
	}
	temp->next = tail->next;
	free(tail);
	tail = temp;
	return tail;
}

struct Node* del_at_pos(struct Node *tail, int pos)
{
	struct Node *temp = tail->next;
	if(pos == 1)
	{
		printf("Give any other position other than 1\n");
		return 0;
	}
	pos--;
	while(pos != 1)	
	{
		temp = temp->next;
		pos--;
	}
	struct Node *temp2 = temp->next;
	temp->next = temp2->next;
	free(temp2);
	temp2 = NULL;
	return tail;
	
}

void print(struct Node* tail)
{
	struct Node *ptr = tail->next;
	do{
		printf("%d  ", ptr->data);
		ptr = ptr->next;
	}while(ptr != tail->next);
}

int main()
{
	struct Node *tail;
	tail = add_at_empty(47);
	tail = add_at_beg(tail, 50);
	tail = add_at_beg(tail, 60);
	tail = add_at_end(tail, 100);
	tail = add_at_pos(tail, 45, 3);
	//tail = del_first(tail);
//	tail = del_last(tail);
   tail = del_at_pos(tail, 3);
	print(tail);

	return 0;
}