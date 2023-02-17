
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		if (c < '9')
		{
			putchar(c);
			putchar(',');
		}
		else
			putchar(c);
	}
	putchar('\n');
	return (0);
}
