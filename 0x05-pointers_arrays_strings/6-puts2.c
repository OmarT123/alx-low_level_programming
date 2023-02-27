#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character in a string
 * @str: input string
 */

void puts2(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
