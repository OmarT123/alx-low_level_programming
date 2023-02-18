#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j <= 9; j++)
		{
			putchar(48 + i);
			putchar(48 + j);
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
