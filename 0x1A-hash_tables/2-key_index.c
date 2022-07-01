#include "hash_tables.h"

/**
 * key_index - function that gives the index of a key
 * @key: the key to be applied
 * @size: size of the array of the hash table
 *
 * Return: the index of a key or NULL for failure
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hcode;

	if ((size == 0) || (!key))
		return (0);

	hcode = hash_djb2(key);

	return (hcode % size);
}
