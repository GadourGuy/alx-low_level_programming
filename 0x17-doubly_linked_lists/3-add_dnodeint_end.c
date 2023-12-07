#include "lists.h"

/**
 * add_dnodeint_end - adds new node
 * @head: head of node
 * @n: int of new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
	}
	else
	{
		while ((*head)->next != NULL)
			(*head) = (*head)->next;
		(*head)->next = new;
		new->next = NULL;
		new->prev = *head;
		*head = tmp;
	}
	return (new);
}
