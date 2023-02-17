#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c++);
	}
	putchar('\n');
	return (0);
}
