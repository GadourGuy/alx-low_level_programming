#include "lists.h"

/**
 * get_dnodeint_at_index - searches for node
 * @head: head of node
 * @index: index of node
 *
 * Return: node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp;

	if (head)
	{
		tmp = head;
		while (head != NULL)
		{
			if (i == index)
				return (tmp);
			i++;
			tmp = tmp->next;
		}
		return (NULL);
	}
	return (NULL);
}
