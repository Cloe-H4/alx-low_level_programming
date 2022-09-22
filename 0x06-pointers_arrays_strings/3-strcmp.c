#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: value less, equal or greater than 0
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, x = 0, y = 0;

	for (i = 0; s1[i] != '\0'; i++)
		x += s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		y += s2[j];
	if (x > y)
		return (15);
	else if (x == y)
		return (0);
	else
		return (-15);
}
