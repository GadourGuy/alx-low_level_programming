#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning
 * @head: new head
 * @n: elemnt of list
 *
 * Return:  the address of the new element, or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
