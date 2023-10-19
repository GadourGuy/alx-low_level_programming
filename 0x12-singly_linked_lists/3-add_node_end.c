#include "lists.h"

/**
 * add_node_end - adds a node at the end of the list
 * @head: head of list.
 * @str: string to be duplicated.
 *
 * Return: pointer to end of head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end = malloc(sizeof(list_t));
	list_t *tmp;

	if (end == NULL)
	{
		return (NULL);
	}
	end->next = NULL;
	end->len = strlen(str);
	end->str = strdup(str);

	if (*head == NULL)
	{
		*head = end;
	}
	else
	{
		tmp = *head;
		while ((*head)->next != NULL)
		{
			*head = (*head)->next;
		}
		(*head)->next = end;
		*head = tmp;
	}
	return (end);

}
