#include <stdio.h>

/**
 * main - prints 98 fibonacci numbers from 1, 2
 *
 * Return: 0 as success
 */

int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	int count = 2;
	unsigned long int fib;

	printf("%lu, %lu, ", a, b);

	while (count < 98)
	{
		fib = a + b;
		printf("%lu", fib);

		if (count == 97)
		{
			printf("\n");
			break;
		}
		else
			printf(", ");

		a = b;
		b = fib;
		count++;
	}
	return (0);
}
