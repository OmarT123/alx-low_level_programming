#include "main.h"

/**
 * clear_bit - clears bit to 0
 * @n: input int
 * @index index of bit 
 * Return: 1 if successful, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = ~(1 << index);
	return (1);
}
