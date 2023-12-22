#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: table to be deleted
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL, *current = NULL;
	unsigned long int i;

	if (!ht || !ht->array)
		return;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			tmp = current;
			current = current->next;
			if (tmp->key)
				free(tmp->key);
			if (tmp->value)
				free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
