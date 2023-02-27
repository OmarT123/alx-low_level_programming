#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character in a string
 * @str: input string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (i % 2 == 0)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
