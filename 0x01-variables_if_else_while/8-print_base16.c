#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all letters of base 16
 * Return: Always 0
 */
int main(void)
{
	int al;

	for (al = 0; al <= 9; al++)
	{
		putchar(al + '0');
	}
	for (al = 'a'; al <= 'f'; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
