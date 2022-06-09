#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of the linked list
 * @head: head of the list
 * @index: index of the element to return
 * Return: nth element
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int count = 0;

	if (!head)
		return (NULL);

	while (temp)
	{
		if (count == index)
			return (temp);
		temp = temp->next;
		count++;
	}

	return (0);
}
