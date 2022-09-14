#include <stdio.h>

/**
 * main - Sum of multiples of 3 & 5
 *
 * Return: 0 is success
 */

int main(void)
{
	int a;
	int r = 0;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
			r += a;
	}
	printf("%d\n", r);
}
