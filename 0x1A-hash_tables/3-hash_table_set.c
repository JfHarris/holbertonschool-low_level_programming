#include "hash_tables.h"

/**
 * new_node - makes new node
 *@key: key
 *@value: value
 * Return: node.
 */

hash_node_t *new_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new->key);
		free(new);
		return (NULL);
	}
	return (NULL);
}


/**
 * hash_table_set - add element to hash table
 *@ht: hash table
 *@key: key
 *@value: value associated with key
 *
 * Return: 1 on success, 0 on failure.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int site;
	hash_node_t *new;
	hash_node_t *move;

	site = 0;

	if (!value || !key || !ht || !ht->array || ht->size == 0 || strlen(key) == 0)
	{
		return (0);
	}

	site = key_index((const unsigned char *)key, ht->size);
	move = ht->array[site];

	while (move != NULL)
	{
		if (strcmp(move->key, key))
		{
			free(move->value);
			move->value = strdup(value);
			return (1);
		}
		move = move->next;
	}

	new = new_node(key, value);
	if (new == NULL)
	{
		return (0);
	}
	new->next = NULL;

	if (ht->array[site] == NULL)
	{
		ht->array[site] = new;
		return (1);
	}
	new->next = ht->array[site];
	ht->array[site] = new;
	return (1);
}
