#include "main.h"
#include <string.h>

/**
 * puts_half - prints second half of string
 * @str: input string
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int half = len / 2;

	if (len % 2 != 0)
		half++;
	while (str[half] != '\0')
	{
		_putchar(str[half++]);
	}
	_putchar('\n');
}
