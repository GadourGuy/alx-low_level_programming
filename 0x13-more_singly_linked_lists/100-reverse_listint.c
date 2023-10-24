#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: head to be reversed
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL, *tmp = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);
	current = *head;
	*head = NULL;
	while (current != NULL)
	{
		tmp = current->next;
		current->next = *head;
		*head = current;
		current = tmp;
	}
	return (*head);
}
