#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of list
 * @h: pointer to head of list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	list_t p;
	size_t c = 0;

	if (h == NULL)
		return (0);
	for (p = h; p; p->next)
	{
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("%s\n", p->str);
		c++;
	}
	return (c);
}
