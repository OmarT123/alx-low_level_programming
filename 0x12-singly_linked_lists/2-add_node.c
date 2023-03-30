#include "lists.h"

/**
 * add_node - adds new node at the start of list
 * @head: head of list
 * @str: string to be added
 * Return: pointer to new head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->len = strlen(str);
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
