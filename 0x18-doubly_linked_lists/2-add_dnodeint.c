#include "lists.h"

/**
 * add_dnodeint - add node at beginning of list
 *@head: pointer to heads node
 *@n: data to put in node
 * Return: new node address on success, NULL on failure.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (0);
	}

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (head == NULL)
	{
		head = &new;
		return (new);
	}
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (new);
}
