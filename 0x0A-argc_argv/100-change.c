#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - entry point
 * @argc: length of input
 * @argv: array of input
 * Return: 1 if error, 0 if successful
 */

int main(int argc, char *argv[])
{
	int count = 0;
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	while (n >= 25)
	{
		count++;
		n -= 25;
	}
	while (n >= 10)
	{
		count++;
		n -= 10;
	}
	while (n >= 5)
	{
		count++;
		n -= 5;
	}
	while (n >= 2)
	{
		count++;
		n -= 2;
	}
	while (n >= 1)
	{
		count++;
		n--;
	}
	printf("%d\n", count);
	return (0);
}
