#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list.
 * @h: linked list to be counted
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		while (h != NULL)
		{
			if (h->str != NULL || h->len)
				count++;
			h = h->next;
		}
	}
	return (count);
}
