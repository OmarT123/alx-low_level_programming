#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concats two strings
 * @s1: first string
 * @s2: second string
 * Return: s2 concatenated to s1
 */

char *str_concat(char *s1, char *s2)
{
	int len, i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = strlen(s1) + strlen(s2);
	s = malloc((sizeof(char) * len) + 1);
	if (s == NULL)
		return (0);
	j = strlen(s1);
	for (i = 0; i < len; i++)
	{
		if (i < j)
			s[i] = s1[i];
		else
			s[i] = s2[i - j];
	}
	return (s);
}
