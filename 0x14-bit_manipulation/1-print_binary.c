#include "main.h"

/**
 * print_binary - print binary presentation of number
 * @n: input int
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
