#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * check - checks if input is int
 * @s: input string
 * Return: 1 if s is string, 0 otherwise
 */

int check(char *s)
{
	int len = strlen(s);
	int i;

	for (i = 0; i < len; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - entry point
 * @argc: size of input
 * @argv: input array
 * Return: 1 if error occurs, 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 0; i < argc; i++)
	{
		if (check(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
