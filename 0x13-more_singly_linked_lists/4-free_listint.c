#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees the listint singly linked list
 * @head: pointer to the first node.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
