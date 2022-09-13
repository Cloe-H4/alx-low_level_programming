#include "main.h"

/**
 * print_last_digit - Prints last digit of n
 * @n: Inputted number
 *
 * Return: 0 as success
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = n * -1;
	_putchar(n + '0');
	return (0);
}
