#include "main.h"

/**
 * _strcmp - compares two input strings
 * @s1: first string
 * s2: second string
 * Return: negative number if s2 > s1, 0 if s1 = s2, positive number otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
