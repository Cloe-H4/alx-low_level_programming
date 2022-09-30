#include <stdio.h>

/**
 * _isdigit - Checks if c is a number between 0-9
 * @c: inputted character
 *
 * Return: 1 if c is number and 0 otherwise
 */

int main(void)
{
	int c = 5;
	if (c >= 0 && c <= 9)
	{
		putchar('1');
		putchar('\n');
	}
	else
		return (0);
	return (2);
}
