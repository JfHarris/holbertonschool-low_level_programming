#include "lists.h"

/**
 * add_nodeint_end - adds node to end of list
 *@head: beginning of string
 *@n: string
 *
 * Return: NULL if fail, else address of new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *not;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	not = *head;

	while (not->next != NULL)
	{
		not = not->next;
	}
	not->next = new;
	new->next = NULL;

	return (*head);
}
