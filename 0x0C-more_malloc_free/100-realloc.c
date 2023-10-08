#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc & free
 * @ptr: pointer to old size
 * @old_size: old size.
 * @new_size: new size
 *
 * Return: pointer to new size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	unsigned int i;

	ptr = malloc(old_size);
	new = malloc(new_size);

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
		return (new);
	}
	if (new_size > old_size)
	{
	
		for (i = 0; i < old_size && i < new_size; i++)
	
		{
		
			*((char *)new + i) = *((char *)ptr + i);
	
		}
	free(ptr);
	}
	return (new);
}
