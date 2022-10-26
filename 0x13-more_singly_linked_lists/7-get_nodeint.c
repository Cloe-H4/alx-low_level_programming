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
	unsigned int i, count = 0;
	listint_t *tmp;

	tmp = head;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}

	if (index < --count)
	{
		for (i = 0; i <= index; i++)
		{
			if (i == index)
				return (head);
			head = head->next;
		}
	}
	return (NULL);
}
