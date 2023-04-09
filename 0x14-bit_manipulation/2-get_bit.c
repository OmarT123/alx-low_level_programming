#include "main.h"

/**
 * get_bit - finds value of bit at index
 * @n: input number
 * @index: index of bit
 * Return: value of bit or -1 if not found
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index == 0)
		return ((n & 1));
	if (n == 0)
		return (-1);
	return (get_bit(n >> 1, index - 1));
}
