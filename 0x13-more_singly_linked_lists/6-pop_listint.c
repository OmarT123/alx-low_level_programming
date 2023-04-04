#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: pointer to head
 * Return: val of head
 */

int pop_listint(listint_t **head)
{
	int res = (*head)->n;
	listint_t *temp = (*head)->next;

	*head = NULL;
	**head = *temp;
	return (res);
}
