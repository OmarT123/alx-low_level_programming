#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: input string
 * @needle: substring to search for
 * Return: pointer to needle in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (needle[i] == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
