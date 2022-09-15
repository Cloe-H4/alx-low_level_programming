#include "main.h"

/**
 * print_triangle - print right-angle triangle of hashes
 * @size: base and height of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int s, space, hash, count;

	for (count = 1; count <= size; count++)
	{
		space = size - count;
		for (s = 0; s < space; s++)
			_putchar(' ');
		for (hash = 0; hash < count; hash++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
