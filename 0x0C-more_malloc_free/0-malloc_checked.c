#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc function.
 * @b: inputted requested size from malloc
 * Return: pointer to new memory or 98 to exit function.
 */

void *malloc_checked(unsigned int b)
{
	void *n_mem;

	n_mem = malloc(b);
	if (n_mem == NULL)
		exit(98);

	return (n_mem);
}
