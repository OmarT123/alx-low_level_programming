#include "lists.h"

/**
 * print_listint - prints elements of list
 * @h: head of list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		printf("%d\n", *h);
		h = h->next;
		c++;
	}
	return (c);
}
