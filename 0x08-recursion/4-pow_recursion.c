#include "main.h"

/**
 * _pow_recursion - returns result of x raised to power y
 * @x: inputted number
 * @y: inputted power
 *
 * Return: x to the power y
 * Or -1 if error occurs.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
