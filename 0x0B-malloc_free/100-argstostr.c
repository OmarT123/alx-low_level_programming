#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * argstostr - concats all args
 * @ac: number of args
 * @av: array of args
 * Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, len = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (0);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			len++;
			j++;
		}
	}
	len += ac + 1;
	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (0);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	return (s);
}
