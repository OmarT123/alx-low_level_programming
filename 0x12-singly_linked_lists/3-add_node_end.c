#include "lists.h"

/**
 * add_node_end - adds new node to end of list
 * @head: original list
 * @str: val of new node
 * Return pointer to head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *h = *head;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (0);
	temp->len = strlen(str);
	temp->str = strdup(str);
	while (h && h->next)
		h = h->next;
	h->next = temp;
	return (*head);
}
