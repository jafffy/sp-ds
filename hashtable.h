#ifndef __HASHTABLE_H__
#define __HASHTABLE_H__

struct node
{
	int data;
};

struct hashtable
{
	struct node** data;
	unsigned int hash_size;
};

void init(struct hashtable* h, const unsigned int hash_size);
void destroy(struct hashtable* h);

int genhashkey(const int key);

void insert(struct hashtable* h, const int key, struct node* data);
void erase(struct hashtable* h, const int key);
struct node* get(struct hashtable* h, const int key);

#endif // __HASHTABLE_H__
