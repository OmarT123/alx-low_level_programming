#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at aa given index
 * @head: pointer to head
 * @index: index to be removed
 * Return: 1 if successful, -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *cur, *temp;

	if (*head == NULL)
		return (-1);
	cur = *head;
	for (i = 0; i < (index - 1); i++)
	{
		if (cur == NULL || cur->next == NULL)
			return (-1);
		cur = cur->next;
	}
	temp = cur->next;
	cur->next = temp->next;
	free(temp);
	return (1);
}
