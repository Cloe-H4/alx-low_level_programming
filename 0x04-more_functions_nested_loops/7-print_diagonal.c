#include "main.h"

/**
 * print_diagonal - prints a horizontal line with n depth
 * @n: depth input
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int s, p, c;

	if (n > 0)
	{
		for (p = 1; p <= n; p++)
		{
			s = p - 1;
			for (c = 1; c <= s; c++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
