#include "main.h"

/**
 * _abs - Gets the absolute value of n
 * @n: inputted number
 *
 * Return: 0 as success
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
	return (0);
}
