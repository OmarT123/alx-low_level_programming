#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int j;
	int z;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (z = j + 1; z <= 9; z++)
			{
				putchar(48 + i);
				putchar(48 + j);
				putchar(48 + z);
				if (i != 8 || j != 9)
				{
					putchar(',');
					putchar(' ');

				}
			}
		}
	}
	putchar('\n');
	return (0);
}
