#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: pointer to array of integers
 * @n: number of required elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);

	}
	printf("\n");
}
