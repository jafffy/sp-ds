#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

struct node
{
	int data;
	struct node* next;
};

struct list
{
	struct node *head, *tail;
};

void init(struct list* l);
void destroy(struct list* l);

void push_back(struct list* l, int data);
void push_front(struct list* l, int data);

void pop_back(struct list* l);
void pop_front(struct list* l);

void insert(struct list* l, struct node* prev, int data);
void erase(struct list* l, struct node* target);

#endif // __LINKEDLIST_H__
