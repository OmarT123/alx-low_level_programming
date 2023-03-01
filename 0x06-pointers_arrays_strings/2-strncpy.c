#include "main.h"

/**
 * _strncpy - copies n elements of src to dest
 * @dest: destination string
 * @src: string to be copied
 * @n: number of characters to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
