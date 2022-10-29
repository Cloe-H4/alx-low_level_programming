#include "main.h"
#include <stdlib.h>

unsigned int power(unsigned int a, unsigned int b);

/**
 * power - raises a to the power of b.
 * @a: the base number.
 * @b: the power.
 *
 * Return: the result calculation.
 */

unsigned int power(unsigned int a, unsigned int b)
{
	unsigned int i, exp = 1;

	for (i = 1; i <= b; i++)
		exp *= a;

	return (exp);
}

/**
 * binary_to_uint - converts a binary number to an integer.
 * @b: a string containing the binary number
 *
 * Return: a converted number or 0 if not successful.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, count, sum = 0;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;
	len--;

	for (count = 0; b[count] != '\0'; count++)
	{
		if (b[count] != '1' && b[count] != '0')
			return (0);
		if (b[count] == '1')
			sum = sum + power(2, len - count);
	}

	return (sum);
}
