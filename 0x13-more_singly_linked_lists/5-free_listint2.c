#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees the listint singly linked list
 * @head: pointer to the first node.
 */

void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return ;
	free_listint2(*head->next);
	free(*head);
	return;
}
