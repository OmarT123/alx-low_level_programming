#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at index
 * @head: head of list
 * @idx: index to insert new node at
 * @n: val of new node
 * Return: pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp, *cur = *head;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	if (idx == 0)
	{
		temp->next = cur;
		*head = temp;
		return (temp);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (cur == NULL || cur->next == NULL)
			return (NULL);
		cur = cur->next;
	}
	temp->next = cur->next;
	cur->next = temp;
	return (temp);
}
