#include "hash_tables.h"

/**
 * hash_table_get - retrieves the value associated with a key
 * @ht: the hash table to be searched
 * @key: the key to search
 * Return: the needed value or NULL on failure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head;

	if (!ht || !key || !strcmp(key, ""))
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	head = (ht->array)[index];

	while (head)
	{
		if (!strcmp(head->key, (char *)key))
			return (head->value);
		head = head->next;
	}

	return (NULL);
}
