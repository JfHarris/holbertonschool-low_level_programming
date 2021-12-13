#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 *@ht: hash table
 *
 * Return: hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *move;
	unsigned int x;
	unsigned long int y;

	if (!ht)
	{
		return;
	}

	x = 0;
	y = 0;

	printf("{");
	while (y < ht->size)
	{
		move = ht->array[y];
		while (move)
		{
			if (x == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", move->key, move->value);
			x = 1;
			move = move->next;
		}
		y++;
	}
	printf("}\n");
}
