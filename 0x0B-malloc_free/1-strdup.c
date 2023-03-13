#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - copies string to new allocated memory
 * @str: input string
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	char *res;
	unsigned long int i;

	if (str == NULL)
		return (0);
	res = (char *) malloc(sizeof(char) * strlen(str) + 1);
	if (res == NULL)
		return (0);
	for (i = 0; i < strlen(str); i++)
	{
		res[i] = str[i];
	}
	return (res);
}
