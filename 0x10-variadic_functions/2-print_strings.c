#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string to separate strings
 * @n: number of args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *curr;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		curr = va_arg(valist, char *);
		if (curr == NULL)
			curr = "(nil)";
		printf("%s", curr);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
