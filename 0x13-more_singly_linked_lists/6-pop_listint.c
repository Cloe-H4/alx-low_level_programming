#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a singly linked list
 * @head: pointer to the first node.
 *
 * Return: integer data in deleted node if successful.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (data);
}
