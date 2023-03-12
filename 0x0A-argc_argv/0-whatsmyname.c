#include "main.h"

/**
 * main - entry point
 * @argc: length of input array
 * @argv: input array
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	while (*argv[0])
	{
		_putchar(*argv[0]);
		argv[0]++;
	}
	return (0);
}
