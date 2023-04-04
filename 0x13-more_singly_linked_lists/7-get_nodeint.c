#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node
 * @head: head of list
 * @index: index of node to be returned
 * Return: returns nth node of list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
