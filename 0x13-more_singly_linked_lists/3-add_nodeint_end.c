#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * @head: head of list
 * @n: element to be added
 *
 * Return: the address of the new element, or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	current = *head;
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
	current = *head;
	return (new);
}
