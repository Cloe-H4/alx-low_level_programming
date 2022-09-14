#include <stdio.h>

/**
 * main - Calculates the sum of even fibonacci numbers
 * below 4000000
 *
 * Return: 0 as successful
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	long int fib;
	unsigned long int sum = 2;

	while (b < 4000000)
	{
		fib = a + b;

		if (fib % 2 == 0)
			sum = sum + fib;
		a = b;
		b = fib;
	}
	printf("%lu\n", sum);
	return (0);
}
