#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the timestable from 0 to n
 * @n: number given
 *
 * Return: void
 */

void print_times_table(int n)
{
	int a, w, z;

	if ((n < 16) && (n >= 0))
	{
	for (w = 0; w <= n; w++)
	{
		for (a = 0; a <= n; a++)
		{
			z = w * a;
			if (a == 0)
				printf("%d", a);
			else if (z < 10)
				printf(",   %d", z);
			else if ((z > 9) && (z < 100))
				printf(",  %d", z);
			else if (z > 99)
				printf(", %d", z);
		}
		printf("\n");
	}
	}
}
