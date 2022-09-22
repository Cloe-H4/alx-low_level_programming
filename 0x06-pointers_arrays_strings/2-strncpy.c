#include "main.h"

/**
 * _strncpy - copies the number of src inputted from
 * str1 to str2
 * @dest: string copied to
 * @src: string copied from
 * @n: number of wanted elements
 *
 * Return: pointer of dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int s;

	for (s = 0; s < n && src[s] != '\0'; s++)
		dest[s] = src[s];

	for (; s < n; s++)
		dest[s] = '\0';

	return (dest);
}
