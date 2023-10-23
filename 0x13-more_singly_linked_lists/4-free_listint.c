#include "lists.h"

/**
 * free_listint -  frees a listint_t list.
 * @head: list to be  freed.
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp, *current;

	current = head;
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
}
