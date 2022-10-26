#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - gets the node at an inputted index.
 * @head: the pointer to the first node
 * @index: the inputted index for requested node.
 *
 * Return: pointer to the requested node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
