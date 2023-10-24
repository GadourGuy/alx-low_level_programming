#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head to be inserted at.
 * @idx: index of the list where the new node should be added
 * @n: int of listint_t
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new, *tmp;
	unsigned int i = 1;

	current = *head;
	new = malloc(sizeof(listint_t));
	if (idx == 0)
	{
		new->next = current;
		new = current;
		new->n = n;
		return (new);
	}
	if (!new)
		return (NULL);
	if (current != NULL)
	{
		while (current != NULL && i < idx)
		{
			current = current->next;
			i++;
		}
		if (current != NULL)
		{
			tmp = current;
			current = current->next;
			tmp->next = new;
			new->next = current;
			new->n = n;
			return (new);
		}
		else
		{
			free(new);
			return (NULL);
		}
	}
	return (NULL);
}
