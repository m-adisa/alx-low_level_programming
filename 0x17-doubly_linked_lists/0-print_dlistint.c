#include "lists.h"

/**
 * print_dlistint - prints the elements of a doubly linked list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
