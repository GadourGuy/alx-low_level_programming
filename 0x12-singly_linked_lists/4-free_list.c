#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list to be freed
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp, *current;

	current = head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp->str);
		free(temp);
	}
}
