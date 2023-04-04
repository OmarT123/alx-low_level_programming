#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: pointer to head
 * Return: val of head
 */

int pop_listint(listint_t **head)
{
	int res;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	res = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (res);
}
