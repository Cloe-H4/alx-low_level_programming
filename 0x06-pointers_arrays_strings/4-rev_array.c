#include "main.h"

/**
 * reverse_array - it reverses the array elements
 * @a: array inputted
 * @n: number of array elements
 *
 * Return: Array
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
