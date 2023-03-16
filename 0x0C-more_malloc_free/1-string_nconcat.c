#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concats part of string to another
 * @s1: input string to concatenate to
 * @s2: string to concatenate
 * @n: number of bytes to concatenate
 * Return: pointer to s1 after concatenation
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int len, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > strlen(s2))
		len = strlen(s2);
	else
		len = n;
	res = malloc(len + strlen(s1) + 1);
	if (res == NULL)
		return (0);
	for (i = 0; i < strlen(s1); i++)
	{
		res[i] = s1[i];
	}
	for (j = 0; j < len; j++)
	{
		res[i] = s2[j];
		i++;
	}
	return (res);
}
