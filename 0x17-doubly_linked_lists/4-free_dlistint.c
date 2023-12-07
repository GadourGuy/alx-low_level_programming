#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list.
 * @head: head to be freed
 *
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (head != NULL && tmp != NULL)
	{
		while (head != NULL)
		{
			tmp = head;
			head = head->next;
			free(tmp);
		}
		free(head);
	}
}
