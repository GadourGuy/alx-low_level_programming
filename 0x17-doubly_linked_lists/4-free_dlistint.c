#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list.
 * @head: head to be freed
 *
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp, *current;

	current = head;
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
}
