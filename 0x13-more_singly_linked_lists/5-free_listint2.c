#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list.
 * @head: head to be freed
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *current;

	current = *head;
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	*head = NULL;
}
