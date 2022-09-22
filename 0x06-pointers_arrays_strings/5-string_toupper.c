#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 * to uppercase.
 * @str: The string to be changed.
 *
 * Return: Pointer to string output
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}
	return (str);
}
