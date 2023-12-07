#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: list to be searched
 * @index: index of deleted item
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current, *tmp;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		if (current->next != NULL)
			current->next->prev = NULL;
		*head = current->next;
		free(current);
		return (1);
	}
	for (i = 0; i < index - 1 && current != NULL; i++)
		current = current->next;
	if (current == NULL || current->next == NULL)
		return (-1);
	tmp = current->next;
	current->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = current;
	free(tmp);
	return (1);
}
