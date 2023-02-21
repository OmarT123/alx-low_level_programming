#include "main.h"

/**
 * print_alphabet - print all alphabets in lowercase
 */

void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c++);
	}
	_putchar('\n');
}
