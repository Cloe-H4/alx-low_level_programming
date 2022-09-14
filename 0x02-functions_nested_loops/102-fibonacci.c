#include <stdio.h>

/**
 * main - Print the first 50 fibonacci nums
 *
 * Return: 0 if successful
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int count, d;

	printf("%d, %d, ", a, b);

	for (count = 2; count < 50; count++)
	{
		if (count < 49)
		{
			d = a + b;
			printf("%d, ", d);
			a = b;
			b = d;
		}
		else if (count == 49)
		{
			d = a + b;
			printf("%d", d);
		}
	}
	printf("\n");
}
