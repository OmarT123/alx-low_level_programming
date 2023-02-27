#include "main.h"

/**
 * print_rev - prints string in reverse order
 * @s: input string
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	c--;
	for (; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');

}
