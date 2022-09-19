#include "main.h"

/**
 * puts_half - prints half of string
 * @str: the string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, len, neg;

	while (str[i++])
		len++;

	if ((len % 2) == 0)
		neg = len / 2;

	else
		neg = (len + 1) / 2;

	for (i = neg; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
