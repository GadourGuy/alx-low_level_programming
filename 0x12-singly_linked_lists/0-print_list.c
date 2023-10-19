#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: list to be printed.
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
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
			count++;
			if (h->str != NULL)
				printf("[%d] %s\n", h->len, h->str);
			else
				printf("[0] (nil)\n");
			h = h->next;
		}
	}
	return (count);
}
