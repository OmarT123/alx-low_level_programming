#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates array and stores certain value in it
 * @size: size of array
 * @c: chararcter to be put in array
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (0);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
