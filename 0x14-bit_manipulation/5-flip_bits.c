#include "main.h"

/**
 * flip_bits - counts the number flips to get another number
 * @n: the first number
 * @m: the number to be flipped to
 *
 * Return: number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nm = n ^ m, no_bits = 0;

	while (nm > 0)
	{
		no_bits += (nm & 1);
		nm >>= 1;
	}

	return (no_bits);
}
