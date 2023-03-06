#include "main.h"

/**
 * _strpbrk - search a string for a set of bytes
 * @s: input string
 * @accept: string to search for
 * Return: occurence of accept in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
