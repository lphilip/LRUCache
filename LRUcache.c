#include "LRUcache.h"

Qnode* create_node(int data)
{
	Qnode *node = (Qnode*)malloc(sizeof(Qnode));
	node->value = data;
	node->next = NULL;
	node->prev = NULL;
	return node;
}

Queue* initialize_queue(int size)
{
	Queue *queue = (Queue*) malloc(sizeof(Queue));
	queue->total_count = size;
	queue->count = 0;
	queue->head = queue->tail = NULL;
	return queue;
}
void add_entry(int page_num, Queue *queue)
{
	if(page_num > SIZE || page_num < 0)
		return;
	hashmap[page_num] = queue->head;

}

void enqueue(Qnode* node, Queue* queue)
{
	queue->count += 1;
	if(queue->head == NULL)
	{
		head = node;
		return;
	}
	Qnode * temp = queue->head;
	node->next = temp;
	temp->prev = node;
	queue->head = node;

}

Qnode * dequeue(Queue *queue)
{
	queue->count -= 1;
	if(queue->count < 0) return;
	if(queue->head == queue->tail)
		return queue->head;
	Qnode *node = queue->tail;
	Qnode *temp = tail->prev;
	temp->next = NULL:
	queue->tail = temp;
	return node;
}

Qnode* get_page(int page_num, Queue* queue)
{
	if(page_num <= SIZE && page_num >=0 )
	{
		if(hashmap[page_num]!= NULL))
		{
			Qnode *node = hashmap[page_num];
			enqueue(dequeue(queue),queue);
			return node;

		}
		else // need to fetch it
		{
			if(queue->total_count != SIZE)
			{	
				add_entry(page_num,queue);
				Queue *node = create_node(page_number);
				enqueue(node,queue);
				return;

			}

			else //replace
			{
				Qnode *node = dequeue(queue);
				free(node);
				add_entry(page_num,queue);
				Queue *node = create_node(page_number);
				enqueue(node,queue);
				return;
			}
		}
}