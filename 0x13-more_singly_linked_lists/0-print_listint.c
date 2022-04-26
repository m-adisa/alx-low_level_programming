#include "lists.h"

/**
 * print_listint - prints the data in the list
 * @h: head of the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nmem = 0;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		while (h != NULL)
		{
			printf("%d", h->n);
			h = h->next;
			nmem += 1;
		}
	}
	return (nmem);
}
