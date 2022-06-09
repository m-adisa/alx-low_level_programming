#include "lists.h"

/**
 * dlistint_len - length of the list
 * @h: head of the list
 * Return: number of elements in the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
