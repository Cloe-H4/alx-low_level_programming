#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Checks state of number
 * @n: number to be checked
 *
 * Description: Checks if n is positive or negative
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negative", n);
	return (0);
}
