#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head, *temp = head;
	size_t i = 0;

	while (temp != NULL && temp->next != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		temp = temp->next->next;
		i++;
		if (current == temp)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			return (i);
		}
	}
	while (head != current)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		i++;
	}

	printf("-> [%p] %d\n", (void *)head, head->n);
	i++;
	return (i);
}
