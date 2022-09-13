#include "main.h"

/**
 * print_last_digit - Prints last digit of n
 * @n: Inputted number
 *
 * Return: 0 as success
 */
int print_last_digit(int n)
{
	int d;

	if (n < 0)
		n = n * -1;
	d = n % 10;
	_putchar(n);
	return (n);
	return (0);
}
