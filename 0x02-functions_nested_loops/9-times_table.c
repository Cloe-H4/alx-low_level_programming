#include "main.h"

/**
 * times_table - Prints the timestables from 0 to 9
 *
 * Description: Creates a time table from 0 to 9
 * Return: 0 as success
 */
void nine(int c);
/**
 * nine - multiply second number
 * @c: Inputted num
 *
 * Description: Handles the displaying of all 9 row
 * Return: void
 */
void dub(int c);
/**
 * dub - Prints two numbers
 * @c: Inputted num
 *
 * Return: void
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (b == 9)
			{
				nine(c);
			}
			else if (((b + 1) * a) > 9)
			{
				if (c > 9)
				{
					dub(c);
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(c + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(c + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

void nine(int c)
{
	if (c > 9)
		dub(c);
	else
		_putchar(c + '0');
}

void dub(int c)
{
	_putchar((c / 10) + '0');
	_putchar((c % 10) + '0');
}
