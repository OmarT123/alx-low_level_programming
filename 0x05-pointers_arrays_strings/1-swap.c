#include "main.h"

/**
 * swap_int - swaps values of two inputs
 * @a: pointer to first int
 * @b: pointer to second int
 */

void swap_int(int *a, int *b)
{
	int *tmp = *a;

	*a = *b;
	*b = *tmp;
}
