#include "main.h"

/**
 * puts_half - prints second half of string
 * @str: input string
 */

void puts_half(char *str)
{
	int len = -1;
	int half;

	while (str[len] != '\0')
		len++;
	half = len / 2;
	while (str[half] != '\0')
	{
		_putchar(str[half++]);
	}
	_putchar('\n');
}
