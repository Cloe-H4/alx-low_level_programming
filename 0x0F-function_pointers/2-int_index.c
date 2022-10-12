#include "function_pointers.h"

/**
 * int_index - searches for integer with specific requirements
 * @array: inputted array of integers
 * @size: numbers of integers in array
 * @cmp: function with specification
 *
 * Return: -1 for error and index of integer for success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
