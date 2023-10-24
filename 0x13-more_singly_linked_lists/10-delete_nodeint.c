#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head to be searched
 * @index: index of deleted node
 *
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *tmp;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	tmp = current;
	current = current->next;
	tmp->next = current->next;
	free(current);
	return (1);
}
