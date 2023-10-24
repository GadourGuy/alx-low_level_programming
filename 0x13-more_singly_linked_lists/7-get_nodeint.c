#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: head to be searched
 * @index: node number.
 *
 * Return: node if existed. NULL if not.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *search;
	unsigned int i = 0;

	if (head)
	{
		search = head;
		while (search != NULL && i != index)
		{
			search = search->next;
			i++;
		}
		return (search);
	}
	return (NULL);
}
