#include <stdio.h>

/**
 * main - Print the first 50 fibonacci nums
 *
 * Return: 0 if successful
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	int count;
	long int d;

	printf("%ld, %ld, ", a, b);

	for (count = 2; count < 50; count++)
	{
		d = a + b;
		printf("%ld", d);
		a = b;
		b = d;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
