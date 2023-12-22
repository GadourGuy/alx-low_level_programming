#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value of a key
 * @ht: table to be searched
 * @key: key to be getting it's value
 *
 * Return: value or NULL if not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *search;

	if (!ht || !key)
		return (NULL);
	idx = hash_djb2((const unsigned char *)key) % ht->size;
	search = ht->array[idx];
	while (search)
	{
		if (strcmp(search->key, key) == 0)
			return (search->value);
		search = search->next;
	}
	return (NULL);
}
