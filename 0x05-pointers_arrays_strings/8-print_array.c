#include "main.h"
#include <std.io>

/**
 * print_array - prints n elements of given array
 * @a: input array
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}
