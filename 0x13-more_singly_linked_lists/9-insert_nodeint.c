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
	listint_t *current, *new;
	unsigned int i = 1;

	current = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL || head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->next = current;
		current = new;
		new->n = n;
		return (new);
	}
	if (current != NULL)
	{
		while (current != NULL && i < idx)
		{
			current = current->next;
			i++;
		}
		if (current != NULL)
		{
			new->next = current->next;
			current->next = new;
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
