#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: head of list
 * @str: string to be duplicated.
 *
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->len = strlen(str);
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (new);
}
