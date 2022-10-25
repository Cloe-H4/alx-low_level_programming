#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a node containing required int to the
 * front of a singly linked list
 * @head: pointer to the first node
 * @n: integer requirement
 *
 * Return: pointer to new element or NULL if failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
