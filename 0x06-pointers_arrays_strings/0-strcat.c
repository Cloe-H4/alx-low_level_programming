#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: inputted string to append to
 * @src: inputted string to be appended
 *
 * Return: pointer to string dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, n;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (n = 0; src[n] != '\0'; n++, i++)
		dest[i] = src[n];
	return (dest);
}
