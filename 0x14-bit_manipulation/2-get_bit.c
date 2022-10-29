#include "main.h"

/**
 * get_bit - gets the bit of a number at an index
 * @n: the number
 * @index: inputted index to get bit
 *
 * Return: the bit or -1 if not successful
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
