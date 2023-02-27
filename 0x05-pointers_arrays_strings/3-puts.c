#include "main.h"

/**
 * _puts - prints the input string
 * @str: pointer to input string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
