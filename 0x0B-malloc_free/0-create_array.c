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

	if (size == 0)
	{
		printf("failed to allocate memory\n");
		return (0);
	}
	if (arr = (char *) malloc(sizeof(char) * size) == NULL)
		return (0);
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
