#include "main.h"

/**
 * print_square - print square with length of size
 * @size: length
 *
 * Return: void
 */

void print_square(int size)
{
	int n, z;

	for (z = 1; z <= size; z++)
	{
		for (n = 0; n < size; n++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
