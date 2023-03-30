#include "lists.h"

/**
 * list_len - returns number of elements in list
 * @h: pointer to head of list
 * Return: lenght of list
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
