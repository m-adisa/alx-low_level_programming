#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node
 * at given position.
 * @head: head of the list
 * @idx: where new node should be created
 * @n: data to be stored at new node
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *srch, *temp;

	srch = *head;

	if (srch == NULL)
		return (NULL);

	while ((count < idx) && (srch != NULL))
	{
		srch = srch->next;
		count++;
	}

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;

	if ((count != idx) || (srch == NULL))
	{
		return (NULL);
	}
	else
	{
		temp->next = srch->next;
		srch->next = temp;
		return (temp);
	}
}
