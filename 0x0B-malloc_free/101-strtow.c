#include "main.h"
#include <stdlib.h>
#include <string.h>

int count_words(char *);
int wordlen(char *);

/**
 * wordlen - find end of word
 * @str: input string
 * Return: end of word
 */
int wordlen(char *str)
{
	int ind = 0, len = 0;

	while (*(str + ind) && *(str + ind) != ' ')
	{
		len++;
		ind++;
	}
	return (len);
}

/**
 * strtow - splits string to words
 * @str: input string
 * Return: pointer to array
 */

char **strtow(char *str)
{
	char **res;
	int i, len, ind, letter, l;

	if (str == NULL || str[0] == '\0')
		return (0);
	len = count_words(str) + 1;
	if (len == 1)
		return (0);
	res = malloc(sizeof(char *) * len);
	if (res == NULL)
		return (0);
	ind = 0;
	for (i = 0; i < len; i++)
	{
		while (str[ind] == ' ')
			ind++;
		letter = wordlen(str + ind) + 1;
		res[i] = malloc(sizeof(char) * letter);
		if (res[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(res[i]);
			}
			free(res);
			return (0);
		}
		for (l = 0; l < letter; l++)
		{
			res[i][l] = str[ind++];
		}
		res[i][l] = '\0';
	}
	res[i] = NULL;
	return (res);
}

/**
 * count_words - counts words in string
 * @str: input string
 * Return: number of strings
 */

int count_words(char *str)
{
	int w;
	unsigned long int i;

	w = 0;
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ')
			w++;
	}
	return (w);
}
