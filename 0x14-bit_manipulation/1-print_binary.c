#include "main.h"

/**
 * print_binary - prints the binary form of an inputted number
 * @n: inputted number
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
