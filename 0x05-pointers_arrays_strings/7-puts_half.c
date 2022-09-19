#include "main.h"

/**
 * puts_half - prints half of string
 * @str: the string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, even, neg;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
		{
			for (even = i / 2; str[even] != '\0'; even++)
				_putchar(str[even]);
		}
		else
		{
			for (neg = (i - 1) / 2; str[neg] != '\0'; neg++)
				_putchar(str[neg + 1]);
		}
	}
	_putchar('\n');
}
