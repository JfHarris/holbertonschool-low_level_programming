#include "lists.h"

/**
 * free_dlistint - free list memory
 *@head: pointer to head node
 * Return: void.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *hold;

	while (head != NULL)
	{
		hold = head->next;
		free(head);
		head = hold;
	}
}
