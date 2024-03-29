#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for array
 * @nmemb: number of elements in array
 * @size: size of each element in array
 * Return: pointer to newly created array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *res;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);
	res = malloc(nmemb * size);
	if (res == NULL)
		return (0);
	for (i = 0; i < (nmemb * size); i++)
		*((char *)(res) + i) = 0;
	return (res);
}
