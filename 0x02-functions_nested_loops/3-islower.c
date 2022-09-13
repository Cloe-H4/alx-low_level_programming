#include "main.h"

/**
 * _islower - Checks letter case
 * @c: letter to be checked
 *
 * Return: 1 if lower, 0 if Upper
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
