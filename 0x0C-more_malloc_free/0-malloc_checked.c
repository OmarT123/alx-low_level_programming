#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - returns pointer to allocated memory
 * @b: size of memory to allocated
 * Return: pointer to memory allocated
 */

void *malloc_checked(unsigned int b)
{
	void *r;

	r = malloc(b);
	if (r == NULL)
		exit(98);
	return (r);
}
