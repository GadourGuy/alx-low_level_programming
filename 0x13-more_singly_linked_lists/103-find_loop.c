#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head to be searched
 *
 * Return: The address of the node
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *begin, *end;

	if (head == NULL)
		return (NULL);
	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (begin = head; begin != end; begin = begin->next)
			if (begin == end->next)
				return (end->next);
	}
	return (NULL);
}
