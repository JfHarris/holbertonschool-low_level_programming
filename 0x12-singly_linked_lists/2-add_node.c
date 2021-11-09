#include "lists.h"

/**
 * add_node - add node to list
 *@head: start of string
 *@str: string
 *
 * Return: nodes.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;

	*head = new;

	return (*head);
}
