#include "main.h"

int ispal(int, int, int);

/**
 * is_palindrome - checks if string is palindrome
 * @s: input string
 * Return: 1 if s is palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int i;

	while (s[i])
	{
		i++;
	}
	i--;
	return (ispal(s, 0, i));
}

/**
 * ispal - checks if string is palindrome
 * @s: input string
 * @f: first letter of string
 * @i: pointer to last character of string
 * Return: same as is_palindrome
 */

int ispal(char *s, int f, int i)
{
	if (i >= f)
		return (1);
	if (s[i] != s[f])
		return (0);
	i--;
	f++;
	return (ispal(s, f, i));
}
