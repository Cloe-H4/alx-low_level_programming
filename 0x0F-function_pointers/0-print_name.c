#include <stdlib.h>

/**
 * print_name - prints name in wanted format.
 * @name: the inputted name
 * @f: the function that creates the wanted format.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
