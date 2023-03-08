#include "main.h"

int root(int, int);

/**
 * _sqrt_recursion - calculates square root of number
 * @n: input integer
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (root(n, 1));
}

/**
 * root - checks if r squared equals n
 * @n: input int
 * @r: guessed root of n
 * Return: r if its the root, else -1
 */

int root(int n, int r)
{
	if (r * r == n)
		return (r);
	if (r * r < n)
		return (root(n, r + 1));
	return (-1);
}
