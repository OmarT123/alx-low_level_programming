#include "main.h"

/**
 * print_sign - checks the sign of input
 * @n: input int
 * Return: 1 - n is positive, 0 - n is zero, -1 - n is negative
 */

int print_sign(int n)
{
	if (n > 0)
		return (1);
	if (n < 0)
		return (-1);
	return (0);
}
