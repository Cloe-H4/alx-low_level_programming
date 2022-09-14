#include "main.h"

/**
 * print_to_98 - Prints numbers from n to 98
 * @n: number to start
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 97)
	{
		while (n <= 97)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n >= 99)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
