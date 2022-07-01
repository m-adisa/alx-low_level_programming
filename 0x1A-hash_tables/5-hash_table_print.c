#include "hash_tables.h"

/**
 * print_list - prints all elements of a linked list
 * @h: pointer to list head
 */
void print_list(hash_node_t *h)
{
	while (h)
	{
		printf("'%s': '%s'", h->key, h->value);
		if (h->next)
			printf(", ");
		h = h->next;
	}
}


/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, index;
	hash_node_t *node;
	char *last_key;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
			node = ht->array[i];
	}

	printf("{");


	if (node)
	{
		last_key = node->key;
		index = key_index((const unsigned char *)last_key, ht->size);

		for (i = 0; i < ht->size; i++)
		{
			print_list(ht->array[i]);
			if (ht->array[i] && i < index)
				printf(", ");
		}
	}

	printf("}\n");
}
