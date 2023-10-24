#include "lists.h"

/**
 * pop_listint - deletes the head.
 * @head: head to be deleted.
 *
 * Return: returns the head node data
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (head != NULL && *head != NULL)
	{
		temp = *head;
		i = (*head)->n;
		*head = (*head)->next;
		free(temp);
		return (i);
	}
	return (0);
}
