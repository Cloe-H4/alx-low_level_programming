#include "main.h"

/**
 * rev_string - reverses given string
 * @s: inputted string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0, num = 0;
	char i;

	while (s[num++])
		len++;

	for (num = len - 1; num >= len / 2; num--)
	{
		i = s[num];
		s[num] = s[len - num - 1];
		s[len - num - 1] = i;
	}
}
