#include "main.h"

/**
 * reverse_array -  a function that reverses an array of integers
 * @a: array of integers
 * @n: numbers of elements in array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n / 2; ++i)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
