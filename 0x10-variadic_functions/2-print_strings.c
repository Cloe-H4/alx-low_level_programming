#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints inputted arguments with string separator
 * @n: number of arguments
 * @separator: the inputted string separator
 * @...: list of inputted arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list aps;
	char *str;

	va_start(aps, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(aps, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(aps);
}
