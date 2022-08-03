#include "lists.h"

/**
 * pop_listint - delete node
 *@head: first node
 * Return: head node data.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int x;

	x = 0;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	x = temp->n;
	*head = temp->next;
	free(temp);

	return (x);
}
