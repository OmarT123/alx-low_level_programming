#include  "main.h"

/**
 * _strncat - concats n bytes of src to dest
 * @dest: 1st string
 * @src: 2nd string
 * @n: Max bytes to be concatenated from src
 * Return: String resulting from concatinating n bytes of src to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
