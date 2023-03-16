#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: smallest number in array
 * @max: largest number in array
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int size, i, cur;
	int *res;

	if (min > max)
		return (0);
	size = max - min + 1;
	res = malloc(size);
	if (res == NULL)
		return (0);
	cur = min;
	for (i = 0; i < size; i++)
	{
		res[i] = cur;
		cur++;
	}
	return res;
}
