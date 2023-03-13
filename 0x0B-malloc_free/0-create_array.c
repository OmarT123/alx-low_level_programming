#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array and stores certain value in it
 * @size: size of array
 * @c: chararcter to be put in array
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
