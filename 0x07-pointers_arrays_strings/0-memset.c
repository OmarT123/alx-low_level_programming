#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: memory pointer
 * @b: constant to fill
 * @n: number of bytes to be filled
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;

	}
	return (s);
}
