#include "hash_tables.h"

/**
 * hash_table_set - adds an element to table
 * @ht: our hash table
 * @key: is the key. key can not be an empty
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = malloc(sizeof(hash_node_t)), *current;
	unsigned long int i, idx;

	if (ht == NULL || new == NULL || !key || !value)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	idx = hash_djb2((const unsigned char *)new->key);
	for (i = 0; i < ht->size; i++)
	{
		if (idx == hash_djb2((const unsigned char *)ht->array[i]->key))
		{
			current = ht->array[i];
			while (current != NULL)
			{
				if (strcmp(current->key, key) == 0)
                {
                    free(current->value);
                    current->value = strdup(value);
                    if (!current->value)
                        return (0);
                    free(new->key);
                    free(new->value);
                    free(new);
                    return (1);
                }
                current = current->next;
            }

            new->next = ht->array[i];
            ht->array[i] = new;
            return (1);
        }
    }

    new->next = ht->array[idx];
    ht->array[idx] = new;

    return (1);
}
