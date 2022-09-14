#include "main.h"

/**
 * times_table - Prints the timestables from 0 to 9
 *
 * Description: Creates a time table from 0 to 9
 * Return: 0 as success
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (c > 9)
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else if ((c <= 9) && (b != 0))
			{
				_putchar(' ');
				_putchar(c + '0');
			}
			else if (b == 0)
			{
				_putchar(c + '0');
			}
		}
		_putchar('\n');
	}
}
