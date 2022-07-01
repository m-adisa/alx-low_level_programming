#ifndef HASH_TABLES_
#define HASH_TABLES_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct hash_node_s - node of a hash table
 * @key: The key string. The key sring is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: Apointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data stucture
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the head of a linked list,
 * because we want our HashTable touse a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);

/* 3-hash_table_set.c */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
int validate(hash_node_t *array, const char *key);
void update(hash_node_t **array, const char *key, const char *value);
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value);

/* 4-hash_table_get.c */
char *hash_table_get(const hash_table_t *ht, const char *key);

/* 5-hash_table_print.c */
void hash_table_print(const hash_table_t *ht);
void print_list(hash_node_t *h);

#endif /* HASH_TABLES_ */
