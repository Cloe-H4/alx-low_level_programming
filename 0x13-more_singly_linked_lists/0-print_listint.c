#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints the content of the linked list
 * @h: the start pointer of the linked list
 *
 * Return: the number of nodes printed if successful.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
