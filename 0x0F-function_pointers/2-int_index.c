#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input array
 * @size: length of array
 * @cmp: pointer to function that compares values
 * Return: index of first occurence if found, -1 otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
