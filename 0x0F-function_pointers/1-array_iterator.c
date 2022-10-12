#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates a function over the elements of an array
 * @array: the inputted array
 * @size: the number of elements in the array
 * @action: the function to be iterated over
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
