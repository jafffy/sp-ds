#include "linkedlist.h"

#ifndef NULL
#define NULL 0
#endif // NULL

void init(struct list* l)
{
	l->head = l->tail = NULL;
}

void destroy(struct list* l)
{
	struct node* idx = NULL;

	for (idx = l->head; idx && idx->next != l->tail; idx = idx->next)
	{
	}
}

void push_back(struct list* l, int data)
{
}

void push_front(struct list* l, int data)
{
}

void pop_back(struct list* l)
{
}

void 
