#include "main.h"

/**
 * times_table - Prints 9 times table
 */

void times_table(void)
{
	int i, j, x;

	x = 0;
	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d", j * (x + i));
			_putchar(',');
			_putchar(' ');
		}
		printf("%d\n", j * x);
	}
}
