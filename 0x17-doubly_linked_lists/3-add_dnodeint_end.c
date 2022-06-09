#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a list
 * @head: head of the list
 * @n: data to add
 * Return: new list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tra = *head;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (tra->next)
		tra->next = tra;

	new->prev = tra;
	tra->next = new;

	return (new);
}
