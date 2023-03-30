#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of list
 * @h: pointer to head of list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t c = 0;

	if (h == NULL)
		return (0);
	for (; h; h = h->next)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		c++;
	}
	return (c);
}
