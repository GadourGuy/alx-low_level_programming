#include "lists.h"

/**
 * print_dlistint - prints elemnts of a list
 * @h: list to be printed
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return 0;
	while(h != NULL)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}
	return (size);
}
