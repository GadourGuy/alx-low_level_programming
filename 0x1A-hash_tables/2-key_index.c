#include "hash_tables.h"

/**
 * key_index - gives you the index of a key.
 * @key: where key is the key
 * @size: size of the array of the hash table
 *
 * Return: the index of our key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0)
		return (0);
	return (hash_djb2(key));
}
