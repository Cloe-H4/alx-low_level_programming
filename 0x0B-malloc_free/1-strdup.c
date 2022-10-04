#include "main.h"
#include <stdlib.h>

/**
 * _strdup - creates a duplicate of string in heap.
 * @str: inputted string
 *
 * Return: NULL if str is empty or insufficient space in heap
 * and pointer to string duplicate if successful.
 */

char *_strdup(char *str)
{
	int len;
	int count = 0;
	char *dup;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	while (count < len)
	{
		dup[count] = str[count];
		count++;
	}
	dup[len] = '\0';
	return (dup);
}
