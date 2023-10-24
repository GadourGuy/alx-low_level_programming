#include "lists.h"

/**
 * _re - reallocates memory
 * @size: size of new list.
 * @h: list to be updated
 * @new: new list
 *
 * Return: pointer to new list
 */

const listint_t **_re(size_t size, const listint_t **h, const listint_t *new)
{
	const listint_t **new_h;
	size_t i;

	new_h = malloc(size * sizeof(listint_t *));
	if (new_h == NULL)
	{
		free(h);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
	{
		new_h[i] = h[i];
	}
	new_h[i] = new;
	free(h);
	return (new_h);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: head to be printed
 *
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0, i;
	const listint_t **h = NULL;

	while (head)
	{
		for (i = 0; i < num; i++)
		{
			if (head == h[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(h);
				return (num);
			}
		}
		num++;
		h = _re(num, h, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(h);
	return (num);
}
