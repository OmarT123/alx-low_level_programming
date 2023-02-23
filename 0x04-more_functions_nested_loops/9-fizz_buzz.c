#include "main.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	bool three, five;

	for (i = 1; i <= 100; i++)
	{
		three = i % 3 == 0;
		five = i % 5 == 0;
		if (three && five)
		{
			printf("FizzBuzz");
		}
		else if (three)
		{
			printf("Fizz");
		}
		else if (five)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
