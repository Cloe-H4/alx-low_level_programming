#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints the node elements in a single linked list.
 * @h: pointer to the first node of list.
 *
 * Return: number of nodes in linked list.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}

	return (count);
}
