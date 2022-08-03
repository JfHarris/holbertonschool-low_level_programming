#include "lists.h"

/**
 * add_dnodeint_end - add node at end of list
 *@head: pointer to head node
 *@n: data to add to node
 * Return: new node address on success, NULL on failure.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *hold;

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
	hold = *head;

	while (hold->next != NULL)
	{
		hold = hold->next;
	}
	new->prev = hold;
	hold->next = new;
	return (new);
}
