#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: length of array
 * @argv: input array
 * Return: 1 if not enough inputs, 0 otherwise
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", argv[1] * argv[2]);
	return (0);
}
