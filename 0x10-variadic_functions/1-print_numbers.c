#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - print numbers
 * @separator: string to be printed between numbers
 * @n: number of args
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	if (n == 0)
		return;
	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
