#include "main.h"

/**
 * _strlen - calculates length of string
 * @s: input string
 * Return: length of s
 */

int _strlen(char *s)
{
	int size;

	size = 0;
	while (*s != '\0')
	{
		size++;
		*s++;
	}
	return (size);
}
