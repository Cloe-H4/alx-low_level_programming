#include "main.h"

/**
 * *_strcpy - copies string from pointer src
 * @dest: inputted char pointer
 * @src: inputted char pointer2
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
