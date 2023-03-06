#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: memory area to be copied
 * @n: number of bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
