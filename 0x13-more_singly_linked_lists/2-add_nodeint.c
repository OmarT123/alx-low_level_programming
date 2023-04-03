#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of lsit
 * @head: pointer to head
 * @n: value of new node
 * Return: pointer to new head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
