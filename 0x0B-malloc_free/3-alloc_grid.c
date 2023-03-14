#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - creates 2d array
 * @width: width of 2d array
 * @height: height of 2d array
 * Return: pointer to 2d array
 */

int **alloc_grid(int width, int height)
{
	int **res;
	int i, j;

	if (width <= 0 || height <= 0)
		return (0);
	res = malloc(sizeof(int *) * height);
	if (res == NULL)
		return (0);
	for (i = 0; i < height; i++)
	{
		res[i] = malloc(sizeof(int) * width);
		if (res[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(res[i]);
			free(res);
			return (0);
		}
		for (j = 0; j < width; j++)
			res[i][j] = 0;
	}
	return (res);
}
