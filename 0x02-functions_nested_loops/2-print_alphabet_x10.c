#include "stdio.h"

/**
 * print_alphabet_x10 - prints lowercase 10 times
 * 
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	char a;
	int i = 0;

	while (i < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
	i++;
	_putchar('\n');
	}
}
