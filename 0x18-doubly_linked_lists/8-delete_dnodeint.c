#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node
 *@head: pointer to head node
 *@index: position of node to delete
 *
 * Return: 1 on success, -1 on failure.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
	{
	dlistint_t *temp;
	dlistint_t *TTemp;
	unsigned int x;

	if (*head == NULL)
	{
		return (-1);
	}

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	x = 0;

	while (x < (index - 1))
	{
		if (temp == NULL)
		{
			return (-1);
		}
		temp = temp->next;
		x++;
	}
	TTemp = (temp->next)->next;
	free(temp->next);
	temp->next = TTemp;

	return (1);
}
