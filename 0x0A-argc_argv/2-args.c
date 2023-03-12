#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: size of input
 * @argv: input array
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[argc]);
	}
	return (0);
}
