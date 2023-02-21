#include "main.h"

/**
 * times_table - Prints 9 times table
 */

void times_table(void)
{
	int i, j, x, res;

	x = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			res = (x + i) * j;
			if (res > 9)
			{
				_putchar((res % 10) + '0');
				_putchar((res / 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(res + '0');
			}
			if (j == 9)
				_putchar('\n');
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
