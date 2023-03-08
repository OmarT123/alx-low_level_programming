#include "main.h"

/**
 * _pow_recursion - calculates power of int
 * @x: int base
 * @y: int power
 * Return: x power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return 0;
	return (_pow_recursion(x, y - 1) * x);
}
