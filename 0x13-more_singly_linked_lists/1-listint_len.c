#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: list to be counted
 *
 * Return: returns the number of elements in a linked
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->n)
			count++;
		h = h->next;
	}
	return (count);
}
