#include "main.h"

/**
 * flip_bits - counts number of bits needed to be
 *		flipped to get from one number to another
 * @n: input number
 * @m: number to flip n to
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m, bits = 0;

	while (x > 0)
	{
		bits += (x & 1);
		x >>= 1;
	}
	return (bits);
}
