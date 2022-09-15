#include "main.h"

/**
 * print_line - Prints the n number of _
 * @n: number input
 *
 * Return: void
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
			_putchar('_');
	}
	_putchar('\n');
}
