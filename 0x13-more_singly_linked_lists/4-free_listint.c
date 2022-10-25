#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees the listint singly linked list
 * @head: pointer to the first node.
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return ;
	free_listint(head->next);
	free(head);
	return;
}
