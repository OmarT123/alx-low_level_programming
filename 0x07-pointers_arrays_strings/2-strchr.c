#include "main.h"

/**
 * _strchr - locates a character in string
 * @s: string
 * @c: character to find
 * Return: pointer to first occurence of c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
