#ifndef __HASHTABLE_H__
#define __HASHTABLE_H__

// Chaining

struct node
{
	int key;
	int value;

	struct node *prev, *next;
};

struct list
{
	struct node *head, *tail;
};

struct hashtable
{
	struct list** data;
	unsigned int hash_size;
};

void list_init(struct list* l);
void list_destroy(struct list* l);

void list_push_back(struct list* l, int key, int value);
void list_push_front(struct list* l, int key, int value);
void list_pop_back(struct list* l);
void list_pop_front(struct list* l);
void list_insert(struct list* l, struct node* prev, int key, int value);
void list_erase(struct list* l, struct node* target);

void init(struct hashtable* h, const unsigned int hash_size);
void destroy(struct hashtable* h);

int genhashkey(const int key);

void insert(struct hashtable* h, const int key, const int data);
void erase(struct hashtable* h, const int key);
struct node* get(struct hashtable* h, const int key);

#endif // __HASHTABLE_H__
