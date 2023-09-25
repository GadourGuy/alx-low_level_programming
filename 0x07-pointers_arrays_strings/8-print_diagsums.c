#include "main.h"

/**
 * print_diagsums - a function that prints the sum of two diagonals
 * @a: array
 * @size: size of square array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size * size; i++)
	{
		sum1 += a[i];
		i += size;
	}
	for (j = (size - 1); j <= (size * size) - size; j++)
	{
		sum2 += a[j];
		j += (size - 2);
	}
	printf("%d, %d\n", sum1, sum2);

}
