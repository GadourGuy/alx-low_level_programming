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
	list_t *tmp = malloc(sizeof(list_t));

	if (end == NULL || tmp == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = end;
		end->next = NULL;
		end->len = strlen(str);
		end->str = strdup(str);
		return (end);
	}
	tmp = *head;
	while ((*head)->next != NULL)
	{
		*head = (*head)->next;
	}
	(*head)->next = end;
	end->next = NULL;
	end->len = strlen(str);
	end->str = strdup(str);
	*head = tmp;
	return (end);

}
