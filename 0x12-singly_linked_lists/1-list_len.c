#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - counts the number of nodes in a single linked list.
 * @h: pointer to the first node of list.
 *
 * Return: number of nodes in linked list.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
