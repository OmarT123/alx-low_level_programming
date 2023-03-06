#include "main.h"

/**
 * _strspn - gets length of prefix substring
 * @s: input string
 * @accept: chars included in prefix
 * Return: length of prefix
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int c = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (c);
		}
	}
	return (c);
}
