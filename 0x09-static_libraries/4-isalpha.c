#include "main.h"

/**
 * _isalpha - Checks if c is an alphabet
 * @c: Entered character
 *
 * Return: 1 for alphabet, 0 for not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
