#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints the node elements in a single linked list.
 * @h: pointer to the first node of list.
 *
 * Return: number of nodes in linked list.
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;
	list_t *dup_h;

	dup_h = h;
	while (dup_h != NULL)
	{
		if (dup_h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%u] %s", dup_h->len, dup_h->str);
		count++;
		dup_h = dup_h->next;
	}

	return (count);
}
