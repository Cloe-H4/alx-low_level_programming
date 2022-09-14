#include "main.h"

/**
 * print_to_98 - Prints numbers from n to 98
 * @n: number to start
 *
 * Return: void
 */

void print_to_98(int n)
{
	n = 0;
	while (n <= 98)
	{
		if (n < 10)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
		else if ((n > 9) && (n != 98))
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(9 + '0');
			_putchar(8 + '0');
		}
		n++;
	}
}
