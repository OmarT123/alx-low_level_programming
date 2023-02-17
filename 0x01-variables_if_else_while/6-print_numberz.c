#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		putchar(48 + i++);
	}
	putchar('\n');
	return (0);
}
