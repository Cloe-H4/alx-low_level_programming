#include "main.h"

/**
 * _puts - prints string
 * @str: inputted string
 *
 * Return: void
 */

void _puts(char *str)
{
	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
