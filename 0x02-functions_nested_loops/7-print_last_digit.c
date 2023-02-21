#include "main.h"

/**
 * print_last_digit - Find the last digit in number
 * @n: input int
 * Return: the last digit in n
 */

int print_last_digit(int n)
{
	int x;

	x = n % 10;
	_putchar(x);
	return (x);
}
