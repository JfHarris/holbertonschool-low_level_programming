#include "lists.h"

/**
 * print_list - print linked list
 *@h: pointer
 * Return: nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *p;
	size_t n;

	p = h;
	n = 0;

	while (p != NULL)
	{
		if (p->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", p->len, p->str);
		}
		p = p->next;
		n++;
	}
	return (n);
}
