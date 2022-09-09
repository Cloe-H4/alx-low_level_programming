#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all letters but eq
 * Return: Always 0
 */
int main(void)
{
	int w;

	for (w = 'a'; w <= 'z'; w++)
	{
		if (w != 'e' || w != 'q')
			putchar(w);
	}
	putchar('\n');
	return (0);
}
