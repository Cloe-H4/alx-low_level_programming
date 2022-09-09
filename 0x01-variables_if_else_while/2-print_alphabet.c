#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the lowercase alphabet
 * Return: Always 0
 */
int main(void)
{
	int al;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
