#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print numbers with commas and spaces
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
		if (x != 9)
			putchar(',');
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
