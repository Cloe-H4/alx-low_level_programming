#include "main.h"

/**
 * _isupper - Tells if letter is upper case
 * @c: letter
 *
 * Return: 1 if upper, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
