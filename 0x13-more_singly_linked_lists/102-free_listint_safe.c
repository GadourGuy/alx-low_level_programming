#include "lists.h"

/**
 * find_listint - finds list
 * @head: head to be searched
 *
 * Return: address of found head
 */

listint_t *find_listint(listint_t *head)
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
/**
 * free_listint_safe - frees a listint_t list.
 * @h: list to be freed
 *
 * Return:  the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loop;
	size_t size;
	int loop2 = 1;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	loop = find_listint(*h);
	for (size = 0; (*h != loop || loop2) && *h != NULL; *h = next)
	{
		size++;
		next = (*h)->next;
		if (*h == loop && loop2)
		{
			if (loop == loop->next)
			{
				free(*h);
				break;
			}
			size++;
			next = next->next;
			free((*h)->next);
			loop2 = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (size);
}
