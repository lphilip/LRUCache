#include <stdio.h>
#include <stdlib.h>


#define SIZE 10

typdef struct node
{
	int data;
	struct node* next;
	struct node* prev;
} Qnode;

typdef struct queue
{
	int count;
	int total_count;
	Qnode* head;
	Qnode* tail;
}Queue;

Qnode* hashmap[SIZE] = NULL;