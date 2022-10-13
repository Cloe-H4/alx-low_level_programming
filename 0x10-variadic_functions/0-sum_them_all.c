#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - gives the sum of all inputted arguments
 * @n: number of undefined arguments
 * @...: undefined list of arguments
 * Return: sum of arguments or 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list aps;

	if (n == 0)
		return (0);

	va_start(aps, n);
	for (i = 0; i < n; i++)
		sum += va_arg(aps, int);
	va_end(aps);
	return (sum);
}
