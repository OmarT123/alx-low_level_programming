#include "main.h"

int ispal(char *, int, int);
int getlen(char *);

/**
 * is_palindrome - checks if string is palindrome
 * @s: input string
 * Return: 1 if s is palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	return (ispal(s, 0, getlen(s) - 1));
}

/**
 * getlen - finds length of string
 * @s: input string
 * Return: length of s
 */

int getlen(char *s)
{
	if (!*s)
		return (0);
	return (1 + getlen(s + 1));
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
