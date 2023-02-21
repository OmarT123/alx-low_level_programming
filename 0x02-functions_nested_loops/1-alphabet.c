#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c++);
	}
	putchar('\n');
}
