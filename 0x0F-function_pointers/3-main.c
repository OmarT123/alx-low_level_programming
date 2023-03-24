#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of args
 * @argv: args
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int a, b;
	char *op;
	char *ops = "+-*/%";

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	if (strstr(ops, op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (b == 0 && (strstr(op, "/") || strstr(op, "%")))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", (get_op_func(op))(a, b));
	return (0);
}
