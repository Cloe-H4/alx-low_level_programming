#include "main.h"

/**
 * rev_string - reverses given string
 * @s: inputted string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int a, b, c, i = 0;

	while (s[i] != '\0')
		i++;

	a = 0;
	b = i - 1;

	while (a < b)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;
		a++;
		b++;
	}
}
