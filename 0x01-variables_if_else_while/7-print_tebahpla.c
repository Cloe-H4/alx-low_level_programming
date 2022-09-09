#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the rev lowercase alphabet
 * Return: Always 0
 */
int main(void)
{
	int al;

	for (al = 'z'; al >= 'a'; al--)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
