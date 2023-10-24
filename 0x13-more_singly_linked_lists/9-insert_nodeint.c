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
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL || head == NULL || (*head == NULL && idx != 0))
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	current = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
		current = current->next;
	}
	if (current != NULL)
	{
		new->next = current->next;
		current->next = new;
		return (new);
	}
	else
	{
		free(new);
		return (NULL);
	}
	return (NULL);
}
