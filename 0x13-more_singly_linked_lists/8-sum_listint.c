#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * @head: head of list.
 *
 * Return: sum of n
 */

int sum_listint(listint_t *head)
{
	int sum = 0, i;

	if (head)
	{
		while (head != NULL)
		{
			i = head->n;
			sum += i;
			head = head->next;
		}
		return (sum);
	}
	return (0);
}
