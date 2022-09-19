#include "main.h"

/**
 * swap_int - swaps value of two variables
 * @a: pointer for var1
 * @b: pointer for var2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
