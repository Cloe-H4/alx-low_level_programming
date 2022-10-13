#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints inputted arguments with string separator
 * @n: number of arguments
 * @separator: the inputted string separator
 * @...: list of inputted arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list aps;

	va_start(aps, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(aps, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(aps);
}
