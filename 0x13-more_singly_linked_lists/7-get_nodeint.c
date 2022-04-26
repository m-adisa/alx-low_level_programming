#include "lists.h"

/**
 * get_nodeint_at_index - get the node at 'index' position
 * @head: head of the list
 * @index: index position
 * Return: the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i <= index)
	{
		if (head == NULL)
			return (0);

		head = head->next;
		i++;
	}

	return (head);
}
