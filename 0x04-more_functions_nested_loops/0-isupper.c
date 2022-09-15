#include "main.h"

/**
 * _isupper - Tells if letter is upper case
 * @c: letter
 *
 * Return: 1 if upper, 0 otherwise
 */

int _isupper(int c)
{
	int a;

	for (a = 'A'; a <= 'Z'; a++)
	{
		if (c == a)
			return (1);
	}
	return (0);
}
