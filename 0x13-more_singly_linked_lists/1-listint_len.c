#include "lists.h"

/**
 * listint_len - finds length of list
 * @h: head of list
 * Return: length of list
 */

size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
