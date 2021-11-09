#include "lists.h"

/**
 * add_node_end - adds node to end of list
 *@head: beginning of string
 *@str: string
 *
 * Return: NULL if fail, else address of new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *next;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	next = *head;

	if (next == NULL)
	{
		*head = new;
		return (new);
	}

	while (next->next != NULL)
	{
		next = next->next;
	}

	next->next = new;

	return (new);
}
