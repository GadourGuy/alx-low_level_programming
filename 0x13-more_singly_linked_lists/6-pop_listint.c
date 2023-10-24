#include "lists.h"

/**
 * pop_listint - deletes the head.
 * @head: head to be deleted.
 *
 * Return: returns the head node data
 */

int pop_listint(listint_t **head)
{
	(*head)->next = NULL;
	free(*head);
	free(head);
	return ((*head)->n);
}
