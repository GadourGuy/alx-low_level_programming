#include "lists.h"

/**
 * insert_dnodeint_at_index - adds new node
 * @h: list that the node will be added to
 * @idx: index
 * @n: int of new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *tmp;
	unsigned int i = 0;

	if (new == NULL || h == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (*h != NULL)
	{
		tmp = *h;
		while (tmp->next != NULL)
		{
			if (i == idx - 1)
			{
				new->prev = tmp;
				new->next = tmp->next;
				if (tmp->next != NULL)
					tmp->next->prev = new;
				tmp->next = new;
				return (new);
			}
			i++;
			tmp = tmp->next;
		}
		if (i == idx - 1 && tmp->next == NULL)
			return (add_dnodeint_end(h, n));
		else
			return (NULL);
	}
	return (NULL);
}
