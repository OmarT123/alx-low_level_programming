#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: array input
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	while (a[i])
	{
		while (a[i][j])
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
