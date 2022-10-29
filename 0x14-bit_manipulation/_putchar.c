#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: character inputted
 *
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
