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

	for (i = 0; i < n / 2; i++, n--)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
	}
}
