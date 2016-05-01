#include <iostream>
using namespace std;

#define SIZE 10

typdef struct node
{
	int data;
	struct node* next;
	struct node* prev;
} Qnode;

typdef struct queue
{
	int number;
	Qnode* head;
	Qnode* tail;
	Qnode* node;
}Queue;

Map<int, Qnode*> hashmap.reserve(SIZE);