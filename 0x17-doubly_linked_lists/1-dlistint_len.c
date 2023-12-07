#include "lists.h"

/**
 * dlistint_len - counts elements
 * @h: linked list
 *
 * Return:  the number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
