#include "hash_tables.h"

/**
 * hash_table_set - adds an element to table
 * @ht: our hash table
 * @key: is the key. key can not be empty
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *current;
	unsigned long int idx;

	if (ht == NULL || !key || !value)
		return (0);
	idx = hash_djb2((const unsigned char *)key) % ht->size;
	current = ht->array[idx];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (!current->value)
				return (0);
			return (1);
		}
		current = current->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new);
		return (0);
	}
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
