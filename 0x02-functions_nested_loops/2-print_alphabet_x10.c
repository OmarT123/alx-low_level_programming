#include "main.h"

/**
 * print_alphabet_x10 - Print alphabets in lowercase 10 times
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c++);
		}
		_putchar('\n');
	}
}
