#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of inputted size
 * with specific first element.
 * @size: the size array
 * @c: the specific first element.
 *
 * Return: NULL for errors and pointer to string for success.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int count = 0;
	char *ray;

	ray = malloc(size);
	if (size == 0 || ray == NULL)
		return (NULL);

	while (count < size)
	{
		ray[count] = c;
		count++;
	}
	return (ray);
}
