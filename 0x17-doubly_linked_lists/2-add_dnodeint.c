#include "lists.h"

/**
 * add_dnodeint - adds a node to the begining of a dlinked list
 * @head: head of the list
 * @n: data to add
 * Return: the new head of the linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head)
		(*head)->prev = new;

	(*head) = new;

	return (new);
}
