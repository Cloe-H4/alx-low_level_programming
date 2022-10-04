#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL for error and pointer to new string as success
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *join;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1])
		len1++;

	len2 = 0;
	while (s2[len2])
		len2++;

	join = malloc(sizeof(char) * (len1 + len2 + 1));
	if (join == NULL)
		return (NULL);

	i = 0;
	while (i < len1)
	{
		join[i] = s1[i];
		i++;
	}

	j = 0;
	while (j < len2)
	{
		join[i] = s2[j];
		i++;
		j++;
	}
	join[i] = '\0';
	return (join);
}
