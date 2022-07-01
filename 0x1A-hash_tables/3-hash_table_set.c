#include "hash_tables.h"

/**
 * validate - checks if a key exists in the table
 * @array: pointer to the hash_node_t list
 * @key: key to look for
 * Return: 1 if key is found, 0 otherwise
 */
int validate(hash_node_t *array, const char *key)
{
	while (array)
	{
		if (!strcmp(array->key, key))
			return (1);
		array = array->next;
	}

	return (0);
}


/**
 * update - replaces the value of a pre-existing key
 * @array: pointer to the hash_node_t list
 * @key: key to update
 * @value: new value to update
 */
void update(hash_node_t **array, const char *key, const char *value)
{
	hash_node_t *temp = *array;

	while (temp && strcmp(temp->key, key))
		temp = temp->next;

	free(temp->value);
	temp->value = strdup(value);
}


/**
 * add_node - add a new node at the beginning of the linked list
 * @head: double pointer to head of the hash_node_t list
 * @key: new key to add
 * @value: value to add to the list
 * Return: address of the new element or NULL
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);

	new->key = strdup(key);
	new->value = strdup(value);

	if (*head == NULL)
	{
		(*head) = new;
		new->next = NULL;
	}
	else
	{
		new->next = (*head);
		(*head) = new;
	}

	return (*head);
}


/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key to the table
 * @value: value corresponding to the key
 * Return: 1 for success, 0 for failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if ((!ht) || (!key) || (!strcmp(key, "")) || (!value))
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (validate(ht->array[index], key))
	{
		update(&ht->array[index], key, value);
		return (1);
	}

	add_node(&ht->array[index], key, value);

	if (&ht->array[index] == NULL)
		return (0);

	return (1);
}
