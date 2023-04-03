#include "lists.h"

/**
 * add_nodeint_end - adds new node at end of list
 * @head: pointer to head
 * @n: val of new node
 * Return: head of list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *h;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
		*head = temp;
	else
	{
		h = head;
		while (h->next)
		{
			h = h->next;
		}
		h->next = temp;
	}
	return (h);
}
