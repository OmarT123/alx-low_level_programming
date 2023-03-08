#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: input string
 * Return: length of s
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
