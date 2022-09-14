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
	unsigned long int fib, ahalf, bhalf, arem, brem, half1, half2;

	printf("%lu, %lu, ", a, b);
	while (count < 92)
	{
		fib = a + b;
		printf("%lu, ", fib);
		a = b;
		b = fib;
		count++;
	}
	ahalf = a / 10000000000;
	bhalf = b / 10000000000;
	arem = a % 10000000000;
	brem = b % 10000000000;
	for (count = 92; count < 98; count++)
	{
		half1 = ahalf + bhalf;
		half2 = arem + brem;
		if ((arem + brem) > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (count != 97)
			printf(", ");

		ahalf = bhalf;
		arem = brem;
		bhalf = half1;
		brem = half2;
	}
	printf("\n");
	return (0);
}
