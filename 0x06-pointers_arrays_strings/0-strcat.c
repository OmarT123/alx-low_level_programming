#include "main.h"

/**
 * _strcat - concatenats two input strings
 * @dest: 1st string
 * @src: 2nd string to be added to dest
 * Return: result of concatenating src to dest
 */

char *_strcat(char *dest, char *src)
{
	char *res = "";
	char *point = res;

	while (*dest != '\0')
	{
		*point = *dest;
		dest++;
		point++;
	}
	while (*src != '\0')
	{
		*point = *src;
		src++;
		point++;
	}
	*point = '\0';
	return (*res);
}
