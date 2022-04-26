#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: head of the list
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p, *n;

	p = NULL;

	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}

	*head = n;
	return (*head);
}
