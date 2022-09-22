#include "main.h"

/**
 * _strncat - concatenate the number of elements in string
 * to another string.
 * @dest: the string to be appended to.
 * @src: the string to append.
 * @n: the number.
 *
 * Return: pointer to dest string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, s;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (s = 0; s < n && src[s] != '\0'; s++, i++)
		dest[i] = src[s];
	return (dest);
}
