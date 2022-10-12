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
	int i, check;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		check = cmp(array[i]);
		if (check != 0)
			return (i);
	}
	return (-1);
}
