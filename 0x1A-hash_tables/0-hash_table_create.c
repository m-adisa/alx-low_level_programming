#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the array
 * Return: pointer to newly created table or NULL at failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;

	if (size == 0)
		return (NULL);

	hash = malloc(sizeof(hash_table_t));
	if (!hash)
		return (NULL);

	hash->size = size;
	hash->array = calloc((size_t)hash->size, sizeof(hash_node_t *));

	return (hash);
}
