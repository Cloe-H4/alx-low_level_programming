#include "main.h"

/**
 * print_array - print a number of elements in an array
 * @a: pointer
 * @n: inputted integer
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (n -= 1; n >= 0; n--)
	{
		printf("%d", a[i]);
		if (n > 0)
			printf(", ");
		i++;
	}
	printf("\n");
}
