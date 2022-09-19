#include "main.h"

/**
 * puts2 - prints every other char in str
 * @str: inputted str
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((a % 2) == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
