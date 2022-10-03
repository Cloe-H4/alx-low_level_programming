#include "main.h"

/**
 * _isdigit - Checks if c is a number between 0-9
 * @c: inputted character
 *
 * Return: 1 if c is number and 0 otherwise
 */

int _isdigit(int c)
{
	return(c >= 48 && c <= 57);
}
