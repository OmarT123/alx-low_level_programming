#include "main.h"

int eval(int, int);

/**
 * is_prime_number - checks if n is prime
 * @n: integer to check
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (eval(n, n));
}

/**
 * eval - checks if n is prime
 * @n: number to check if prime
 * @r: guessed number
 * Return: same as above
 */

int eval(int n, int r)
{
	if (r <= 1)
		return (0);
	if (n % r == 0)
		return (1);
	return (eval(n, r - 1));
}
