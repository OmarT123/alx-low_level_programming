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
	listint_t *temp, *cur, *prev;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	cur = (*head)->next;
	prev = *head;
	while (cur)
	{
		if (i == idx)
		{
			prev->next = temp;
			temp->next = cur;
			return (temp);
		}
		else
		{
			cur = cur->next;
			prev = prev->next;
			i++;
		}
	}
	return (NULL);
}
