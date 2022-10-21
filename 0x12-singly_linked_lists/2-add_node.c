#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - adds a node to the start of a linked list
 * @head: the address of the last pointer
 * @str: the string value of the new node
 *
 * Return: the address of the new node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;
	unsigned int len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len]; len++)
		;

	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
