#include "main.h"

/**
 * _strcat - concatenats two input strings
 * @dest: 1st string
 * @src: 2nd string to be added to dest
 * Return: result of concatenating src to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
