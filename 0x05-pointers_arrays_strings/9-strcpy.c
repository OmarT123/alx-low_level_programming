#include "main.h"

/**
 * _strcpy - copies a string into another string
 * @dest: string to paste at
 * @src: initial string to be copied
 * Return: pointer of new string
 */

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;
	int i = 0;

	while (src[i] != '\0')
	{
		temp[i] = src[i];
		i++;
	}
	temp[i] = src[i];
	return (dest);
}
