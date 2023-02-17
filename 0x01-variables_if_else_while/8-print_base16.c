#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	char i;
	char a;

	i = '0';
	a = 'a';
	while (i <= '9')
	{
		putchar(i++);
	}
	while (a <= 'f')
	{
		putchar(a++);
	}
	putchar('\n');
	return (0);
}
