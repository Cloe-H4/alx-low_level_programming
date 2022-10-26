#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees the listint singly linked list
 * @head: pointer to the first node.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
