#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a node containing an integer to the
 * end of a singly linked list.
 * @head: pointer to the first node
 * @n: integer for the new node
 *
 * Return: pointer to the new node or NULL if fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new;
	}

	return (new);
}
