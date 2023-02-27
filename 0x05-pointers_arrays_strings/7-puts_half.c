#include "main.h"
#include <string.h>

/**
 * puts_half - prints second half of string
 * @str: input string
 */

void puts_half(char *str)
{
	int half = strlen(str) / 2;

	while (str[half] != '\0')
	{
		_putchar(str[half++]);
	}
	_putchar('\n');
}
