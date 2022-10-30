#include "main.h"

/**
 * set_bit - sets the bit at an index to 1
 * @n: pointer to the integer
 * @index: particular position of bit to reset
 *
 * Return: 1 for success, -1 for error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);
	return (1);
}
