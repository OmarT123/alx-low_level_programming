#include "main.h"

/**
 * _islower - check if given input is lowercase
 * c - input char
 * Return: 1 - c is lowercase, 0 - c is Uppercase
 */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	return (0);
}
